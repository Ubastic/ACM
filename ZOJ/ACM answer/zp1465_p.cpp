////////////////////////////////////////////////////////////////////////////////////////
//���ʱ�䣺
//�ķ�ʱ�䣺
//����ʱ�䣺
//ע�⣺
//ѧϰ��
//�ύ������
////////////////////////////////////////////////////////////////////////////////////////
#define cin fin

#include <iostream>
#include <string>
#include <strstream>
#include <list>
#include <vector>
#include <algorithm>
#include <math.h>
#include <functional>
#include <time.h>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <iomanip>

using namespace std;

	#define MAX 1001


#define MPN   1001

////////////////////////////////////////////////////////////////////////////////////////
//points management lib using integer
struct IPoint
{
  int x, y;

  IPoint()
  {
	x = y = 0;
  }
};



struct DPoint
{
  double x, y;

  DPoint()
  {
	x = y = 0;
  }

  DPoint( const IPoint & point )
  {
	this->x = point.x;
	this->y = point.y;
  }
};



//������ֱ�ߵĲ��
inline int mul_cross( const IPoint & ls, const IPoint & le, const IPoint rs, const IPoint re )
{
  IPoint l;
  l.x = le.x - ls.x;
  l.y = le.y - ls.y;
  IPoint r;
  r.x = re.x - rs.x;
  r.y = re.y - rs.y;
  return l.x * r.y - r.x * l.y;
}

//������ֱ�ߵĵ��
inline int mul_dot( const IPoint & ls, const IPoint & le, const IPoint rs, const IPoint re )
{
	return ( le.x - ls.x ) * ( re.x - rs.x ) + ( le.y - ls.y ) * ( re.y - rs.y );
}

inline int dis( const IPoint & s, const IPoint & e )
{
	return ( s.x - e.x ) * ( s.x - e.x ) + ( s.y - e.y ) * ( s.y - e.y );
}

//�ж�һ�����Ƿ���һ��ֱ����
//=0:�غ��ڶ���
//<0:�ڲ�
//>0:�ⲿ
inline int isin( const IPoint & ls, const IPoint & le, const IPoint & point )
{
	return mul_dot( point, ls, point, le );
}

//���ݽǶȹ�ϵ���бȽ�
//l>r ����ֵ����ʾ��sΪ���ʱl��r���Ҳ�,�������ǹ��߶���l����ʼ�����Щ��
//l<r����ֵ
//l=r: 0ֵ
inline int cmp_conv( IPoint l, IPoint r, const IPoint & s )
{
	int cross = mul_cross( s, l, s, r );
	if( cross < 0 )
		return -1;
	else if( cross > 0 )
		return 1;
	else{
		cross = dis( s,l ) - dis( s,r );
		if( cross < 0 )
			return 1;
		else if( cross >0 )
			return -1;
		else
			return 0;
	}
}

//��һ�����дӴ�С���򣨴��ҵ��󣩣���ʱ�룩
void qsortp( IPoint src[MPN], int start, int end, const IPoint & s )
{
  if ( start >= end )
	return;
  int tms = start, tme = end;
  IPoint tmppi = src[start];
  while ( tms != tme )
  {
	while ( ( cmp_conv( src[tme], tmppi, s ) < 0 ) && ( tme > tms ) )
	  tme--;
	if ( tms < tme )
	  src[tms++] = src[tme];
	while ( ( cmp_conv( src[tms], tmppi, s ) >= 0 ) && ( tms < tme ) )
	  tms++;
	if ( tms < tme )
	  src[tme] = src[tms];
  }
  src[tms] = tmppi;
  qsortp( src, start, tms - 1, s );
  qsortp( src, tms + 1, end, s );
}

//͹��Ԥ������ʱ�뼫������
bool ConvSort( IPoint src[MPN], int n )
{
  IPoint start = src[0];
  int starti = 0;

  //���������ʼ��
  for ( int i = 1; i < n; i++ )
  {
	 if ( start.y > src[i].y ){
	  start = src[i];
	  starti = i;
	 }
	else if ( start.y == src[i].y && start.x > src[i].x )
	  start = src[i], starti = i;
  }
  src[starti] = src[0];
  src[0] = start;
  qsortp( src, 1, n - 1, start );
  return true;
}

//��͹��(�ɶ�����������͹����
//�Թ��ߵ�Ĵ���: Ĭ�ϱ������ߵ���м�㣬���������жϹ����е�<��Ϊ<=�򲻱������ߵ���м��
bool MakeConv( IPoint src[MPN], int & src_n, IPoint res[MPN], int & res_n,int flag )
{
  IPoint my_stack[MPN], tmppi;
  int top = 0, tail = 1,i,thestart=1;
  my_stack[0] = src[0];
  my_stack[1] = src[src_n-1];

  if( flag )
	  goto YES;
  //ȥ�����ߵ���-------------------------------------------------
  while( mul_cross( my_stack[tail],my_stack[top],my_stack[top],src[thestart] )==0
	  && isin( my_stack[tail],src[thestart],my_stack[top] )<0 ){
	  my_stack[top] = src[thestart];
	  thestart++;
  }
  ///////////////////////////////////////////////////////////////
YES:
  tail = (tail+1)%MPN;
  my_stack[tail] = src[thestart++];
  top = ( top - 1 + MPN ) % MPN;
  my_stack[top] = my_stack[tail];
  if ( mul_cross( my_stack[1],my_stack[0], my_stack[1], my_stack[2] ) < 0 )
  {
	tmppi = my_stack[0];
	my_stack[0] = my_stack[1];
	my_stack[1] = tmppi;
  }
  res_n = 4;
  for ( i = thestart; i < src_n - 1; i++ )
  {
	int tmp = ( top + 1 ) % MPN;
	bool tag1 = false,tag2=false;
	int cross = mul_cross( my_stack[top],src[i], my_stack[top], my_stack[tmp] );
	while ( cross < 0 || ( cross==0 && !flag ) )
	{
	  top = tmp;
	  tmp = ( top + 1 ) % MPN;
	  tag1 = true;
	  res_n--;
	  cross = mul_cross( my_stack[top],src[i], my_stack[top], my_stack[tmp] );
	}
	tmp = ( tail - 1 + MPN ) % MPN;
	cross = mul_cross( my_stack[tail], my_stack[tmp], my_stack[tail], src[i] );
	while ( cross <= 0  || ( cross == 0 && !flag ) )
	{
	  tail = tmp;
	  tmp = ( tail - 1 + MPN ) % MPN;
	  tag2 = true;
	  res_n--;
	  cross = mul_cross( my_stack[tail], my_stack[tmp], my_stack[tail], src[i] );
	}
	if ( tag1||tag2 )
	{
	  top = ( top - 1 + MPN ) % MPN;
	  my_stack[top] = src[i];
	  tail = ( tail + 1 ) % MPN;
	  my_stack[tail] = src[i];
	  res_n+=2;
	}
  }
  res_n--;
  for ( i = 0; i < res_n; i++ )
	res[i] = my_stack[( tail - i + MPN) % MPN];
  return true;
}

//����ֱ�ߵĽ���
//�ϸ��ཻ��1
//�ϸ��ཻ��0
//���ϸ��ཻ��-1
int GetCross( IPoint ss, IPoint se, IPoint as, IPoint ae, DPoint * res = NULL )
{
  int s_s, s_e, a_s, a_e, ret = 0;
  s_s = cmp_conv( se, as, ss );
  s_e = cmp_conv( se, ae, ss );
  a_s = cmp_conv( ae, ss, as );
  a_e = cmp_conv( ae, se, as );
  if ( s_s * s_e < 0 && a_s * a_e < 0 )
  {
	ret = 1;
	if ( res != NULL )
	{
	  res->x = ( as.x * a_e - ae.x * a_s ) / (double)( a_e - a_s );
	  res->y = ( as.y * a_e - ae.y * a_s ) / (double)( a_e - a_s );
	}
  }
  if ( s_s == 0 && isin( ss, se, as ) <= 0 )
  {
	ret = -1;
	if ( res != NULL )
	  * res = as;
  }
  if ( s_e == 0 && isin( ss, se, ae ) <= 0 )
  {
	ret = -1;
	if ( res != NULL )
	  * res = ae;
  }
  if ( a_s == 0 && isin( as, ae, ss ) <= 0 )
  {
	ret = -1;
	if ( res != NULL )
	  * res = ss;
  }
  if ( a_e == 0 && isin( as, ae, se ) <= 0 )
  {
	ret = -1;
	if ( res != NULL )
	  * res = ss;
  }
  return ret;
}

//�ж��Ƿ��Ǽ򵥶����
//>0:�򵥶����
//=0:���Ӷ����
//<0:���Ƕ����
int IsSimple( IPoint src[MPN], int n )
{
  int i, j;
  bool tag = true;
  for ( i = 0; i < n - 1; i++ )
  {
	for ( int j = i + 2; j < n - 1; j++ )
	{
	  if ( GetCross( src[i], src[i + 1], src[j], src[j + 1], NULL ) != 0 )
	  {
		tag = false;
		break;
	  }
	}
	if ( !tag )
	  break;
  }
  for ( j = 1; j < n - 2; j++ )
  {
	if ( GetCross( src[0], src[n - 1], src[j], src[j + 1], NULL ) != 0 )
	{
	  tag = false;
	  break;
	}
  }
  if ( n < 3 )
	return -1;
  else if ( tag )
	return 1;
  else
	return 0;
}

//���������
double GetArea( IPoint src[MPN], int n )
{
  int tag = IsSimple( src, n );
  if ( tag <= 0 )
	return tag;
  double sum = 0;
  for ( int j = 0; j < n; j++ )
	sum += src[j % n].x * src[( j + 1 ) % n].y - src[j % n].y * src[( j + 1 ) % n].x;
  sum /= 2;
  if ( sum < 0 )
	sum = -sum;
  return sum;
}

//�������ܳ�
double GetPerimeter( IPoint src[MPN], int n )
{
  int tag = IsSimple( src, n );
  if ( tag <= 0 )
	return tag;
  double sum = 0;
  for ( int i = 0; i < n; i++ )
	sum += sqrt( ( double )dis( src[i], src[( i + 1 ) % n] ) );
  return sum;
}

inline int dbcmp( double d )
{
  double precision = 6e-8;
  if ( d > precision )
	return 1;
  if ( d < -precision )
	return -1;
  return 0;
}
#define PI 3.1415926535897932384626433832795

int main()
{
///////////////////////////////////////////////////////////////////////
	clock_t start = clock();

  ifstream fin("zp1465.in");
	IPoint data[MPN],res[MPN];
	int n,l,resn,t;
	cin>>t;
	for(int tt=0;tt<t;tt++){
		cin>>n>>l;
		if( !cin )
			break;
		if( tt!=0 )
			cout<<endl;
		for( int i=0;i<n;i++ )
			cin>>data[i].x>>data[i].y;
		ConvSort( data,n );
		MakeConv( data,n,res,resn,false );
		double result = GetPerimeter( res,resn );
		for( int j=0;j<resn;j++ ){
			int pre = (j-1+resn)%resn;
			int sub = (j+1)%resn;
			double numerator = mul_dot(res[pre],res[j],res[j],res[sub]);
			double denominator = sqrt((double)dis( res[pre],res[j] )) * sqrt((double)dis( res[j],res[sub] ));
			double tmp = numerator / denominator;
			double rad;
			if( dbcmp(tmp-1) == 0 )
				rad = 0;
			else
				rad= acos(tmp);
			if( denominator!=0 )
				result +=rad *l;
		}
		cout<<setiosflags( ios::fixed ) << setprecision(0) <<result<<endl;
	}

///////////////////////////////////////////////////////////////////////
	cout<<"time:"<< (clock()-start)<<endl;

	return 0;

}

