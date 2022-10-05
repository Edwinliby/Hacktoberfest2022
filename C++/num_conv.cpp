#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int main()
{
	int value;
	printf("Enter 0 for decimal to binary , 1 to binary to decimal\n");
	//scanf("%d",&value);
	cin >> value;
	if(value == 0)
		{
			ll num ;
		ll out[100];
		ll count=0;
		printf("Enter num\n");
		//scanf("%lld",&num);
		cin >> num;
		for(ll i=0;num!=0;i++)
			{
				out[i] = num%2;
				num=num/2;
				count++;
			}
		for(ll i=count-1;i>=0;i--)
			cout << out[i];
		}
	else
		{
			ll sum=0;
			ll num;
			printf("Enter the binary numbers\n");
			cin >> num;
			int temp=num;
			int base=1;
			while(temp)
				{
					int lastdigit = temp%10;
					temp=temp/10;
					sum = sum + lastdigit *base;
					base = base *2;
				}
			cout << sum << endl;
		}
	}
