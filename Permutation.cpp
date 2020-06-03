#include <iostream>
#include<string>
using namespace std;
void swap(char *a,char *b)
{
	char t=*a;
	*a=*b;
	*b=t;
}
void permute(string s,int l,int k)
{  
	int i;
	if(l==k)//reached end of string || only 1 character. 
    cout<<s<<endl;
	else
	for( i=l;i<=k;i++)
	{
		swap(&s[i],&s[l]);
		permute(s,l+1,k);
		swap(&s[i],&s[l]);//BackTracking
		
	}
}
int main() {
	// your code goes here
	string s ="594";
	//2 pointers to trace string at each level
	//l,k;
	permute(s,0,s.length()-1);
	return 0;
}
