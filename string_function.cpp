#include <iostream>
#include <cstring>
using namespace std;

int string_length(char *str);
char* string_concat(char *str,char *str1);
int string_compare(char *str,char *str1);
char* string_copy(char *str,char *str1);
string char_to_string_convert(char *str);
char* string_toLower(char *str);
char* string_toUpper(char *str1);
char* string_duplicate(char *str);
char* string_set(char *str,char *str2);
int string_character_find(char *str1,char *str2);

int main(int argc,char* argv[])
{
	string strr;
	char *str,*str1,*str2;
	str=argv[1];
	str1=argv[2];
	str2=argv[3];
		cout<<"String1 is: "<<str<<endl;
		cout<<"String2 is: "<<str1<<endl;
	int len=string_length(str);
		cout<<"length is: "<<len<<endl;
	char *str3=string_concat(str,str1);
		cout<<"String after conctenation is: "<<str3<<endl;
	int comp=string_compare(str,str1);
	if(comp==0)
		cout<<"Both string are equal"<<endl;
	else if(comp==1)
		cout<<"Both string are not equal"<<endl;
	string s1=char_to_string_convert(str);
        	cout<<"String is: "<<s1<<endl;
	char *str5=string_toLower(str);
		cout<<"lowercase string: "<<str5<<endl;
	char *str6=string_toUpper(str1);
		cout<<"uppercase string: "<<str6<<endl;
	char *str7=string_duplicate(str);
		cout<<"Dulicate string is: "<<str7<<endl;
	char *str8=string_set(str,str2);
		cout<<"After setting string is: "<<str8<<endl;
	int oi=string_character_find(str1,str2);
	if(oi==-1)
		cout<<"character not present"<<endl;
	else
		cout<<"character found at index: "<<oi<<endl;
	char *str4=string_copy(str,str1);
		cout<<"Copied string is: "<<str4<<endl;
	return 0;
}
int string_length(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
char* string_concat(char *str,char *str1)
{
	int i=0,j=0;
	char *str3=new char[40];
	while(i<strlen(str))
	{
		str3[i]=str[i];
		i++;
	}
	while(j<strlen(str1))
	{
		str3[i++]=str1[j];
		j++;
	}
	str3[i]='\0';
	return str3;
}
int string_compare(char *str,char *str1)
{
	for(int i=0;i<strlen(str)+strlen(str1);i++)
	{
		if(str[i]==str1[i])
			return 0;
		else if(str[i]!=str1[i])
			return 1;
	}	
}
char* string_copy(char *str,char *str1)
{
	int i=0;
	while(str1[i]!='\0')
	{
		str[i]=str1[i];
		i++;
	}
	str[i]='\0';
	return str;
}
string char_to_string_convert(char *str)
{
	string s=str;
	return s;
}
char *string_toLower(char *str)
{
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		str[i]=str[i]+32;
	}
	return str;
}
char *string_toUpper(char *str1)
{
	for(int i=0;i<strlen(str1);i++)
	{
		if(str1[i]>='a' && str1[i]<='z')
		str1[i]=str1[i]-32;
	}
	
	return str1;
}
char*  string_duplicate(char *str)
{
	char *str3=str;
	return str3;
}
char* string_set(char *str,char *str2)
{
	int i=0,j=0;
	while(str[i]!='\0')
	{
		str[i]=str2[j];
		i++;
	}
	return str;

}
int string_character_find(char *str1,char *str2)
{
	int j=0,i=0,index=-1;
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]==str2[j])
		{
		index=i;
		break;
		}
	}	
	return index;
}
