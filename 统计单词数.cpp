#include <cstring>
#include <cctype>
#include <cstdio>

void strlower (char *a) {//��д����������д��ĸת����Сд��ĸ
	for(int i = 0; a[i]; i ++ ) {
		if(isupper(a[i])) a[i] = tolower(a[i]);//isupper���ж��Ƿ��Ǵ�д��ĸ��ϵͳ������tolower�ǽ���ת����Сд��ĸ�ĺ���
	}
}

int main () {
	
	char destination[1000001], *q, source[11], *p;//destintion��Ҫ�ҵ����£�source��Ҫ�ҵĵ��ʣ�p��q����ָ���࣬�ֱ����ǰ������ʲô�ط��˺����һ���ҵ����ʵ�ָ��
	bool flag = false;//�ж��Ƿ��ҵ���
	int ans = 0, ans1 = -1;//�������״γ��ֵ�λ�ã�ans1�ĳ�ֵ��-1����Ϊ��û�ҵ���ʱ���ֱ����������ˣ�ʡ��
	
	gets(source);
	gets(destination);//����
		
	strlower(destination);//ȫ��ת����Сд��ĸ
	strlower(source);
	
	int len = strlen(source);//���ȣ��ں����ֹԽ��ͼӿ��ٶ�
	
	p = destination;//�Ƚ�ָ����Ϊȫ��
	
	for(; q = strstr(p, source); ) {//ѭ����strstr����һ���ַ����������һ���ַ�����Ѱ����û������ַ��������У������״γ��ֵ�ָ����򷵻�NULL����ָ�룩
		if( q != NULL//�ҵ��� 
		&& ( q == destination || *(q - 1) == ' ') //��һ�������Ƿ�ֹԽ�磬�ڶ������ж�ǰһ���ǲ��ǿո�
		&& ( *(q + len) == '\0' || *(q + len) == ' ' ) ) {//�������Ҳ�ǿո�
			ans ++ ;//�𰸼�һ
			if(flag == false) {//������״��ҵ�
				flag = true;
				ans1 = q - destination;//��һ��λ��
			}
		}
		p = q + len;//ˢ��ָ��
	}
	
	if(flag == true)//�ҵ���
		printf("%d %d" , ans, ans1);//���
	else 
		printf("%d", ans1);//���-1
	
	return 0;
}



//�ҵĴ���ȽϽṹ�����������
//�ڴ�Ҳ�����Ҷ�����string�࣬c++�й���string���ش�ô���c��pascal��û��Ŷ
//
//����ͷ�ļ�
#include <iostream>
#include <string>
//�����ռ�
using namespace std;
int main(){
    //���������ַ���
    string a;
    string b;
    //��string�⣬����getline, ֱ�Ӷ���һ����
    getline(cin,a);
    getline(cin,b);
    //ת����Сд�����Զ�ת��Ϊ��д������Сд
    for (int i=0;i<a.length();++i){
        a[i]=tolower(a[i]);
    }
    for (int i=0;i<b.length();++i){
        b[i]=tolower(b[i]);
    }
    //��Ϊ�������Ĳ��㣬����Ҫ��ǰ��Ӽ����ո�һ��Ҫ��ͬ����ģ�ͬ����ͬ��������ͬ��
    a=' '+a+' ';
    b=' '+b+' ';
    //�ȿ����᲻���Ҳ�������a.find()��string::npos
    if (b.find(a)==string::npos){
        cout<<-1<<endl;
    }
    //����ҵõ�
    else {
        int alpha=b.find(a);
        int beta=b.find(a),s=0;//��������ʼ��Ϊ0
        while (beta!=string::npos){
            ++s;//������
            beta=b.find(a,beta+1);
        }
        cout<<s<<" "<<alpha<<endl;//�����һ�����ܹ��м���
    }
    //��������ֵΪ0��������������
    return 0;
}
