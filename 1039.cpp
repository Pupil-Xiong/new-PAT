#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;
    int i=0,j=0;
    int flag1=0;
    cin>>s1;    //���е�
    getchar();
    cin>>s2;    //��Ҫ��
    for(i=0;i<s1.length();i++)
    {
        for(j=0;j<s2.length();j++)
        {
			  if(s1[i]==s2[j])
            {
                s1.erase(i,1);  //ɾ����ͬ��
                s2.erase(j,1);  //ɾ����ͬ�� 
				i--;         //erase���ԣ�ɾ������Ż���ǰ�ƶ���������Ҫ�����Ƚϴ�λ 
				break;         //��Ҫ����ɾ��������������±Ƚ� 
            }
        }
    }
    if(s2.empty())
    {
        cout<<"Yes ";
        cout<<s1.length();
    }
    else
    {
        cout<<"No ";
        cout<<s2.length();
    }
    return 0;
}
