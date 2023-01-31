#include <cstring>
#include <cctype>
#include <cstdio>

void strlower (char *a) {//手写函数，将大写字母转换成小写字母
	for(int i = 0; a[i]; i ++ ) {
		if(isupper(a[i])) a[i] = tolower(a[i]);//isupper是判断是否是大写字母的系统函数，tolower是将其转换成小写字母的函数
	}
}

int main () {
	
	char destination[1000001], *q, source[11], *p;//destintion是要找的文章，source是要找的单词，p和q都是指针类，分别代表当前搜索到什么地方了和最后一次找到单词的指针
	bool flag = false;//判断是否找到了
	int ans = 0, ans1 = -1;//个数和首次出现的位置，ans1的初值是-1是因为在没找到的时候就直接输出就行了，省事
	
	gets(source);
	gets(destination);//输入
		
	strlower(destination);//全部转换成小写字母
	strlower(source);
	
	int len = strlen(source);//长度，在后面防止越界和加快速度
	
	p = destination;//先将指针设为全部
	
	for(; q = strstr(p, source); ) {//循环，strstr是在一个字符串里面给定一个字符串，寻找有没有这个字符串，若有，返回首次出现的指针否则返回NULL（空指针）
		if( q != NULL//找到了 
		&& ( q == destination || *(q - 1) == ' ') //第一个条件是防止越界，第二个是判断前一个是不是空格
		&& ( *(q + len) == '\0' || *(q + len) == ' ' ) ) {//如果后面也是空格
			ans ++ ;//答案加一
			if(flag == false) {//如果是首次找到
				flag = true;
				ans1 = q - destination;//第一个位置
			}
		}
		p = q + len;//刷新指针
	}
	
	if(flag == true)//找到了
		printf("%d %d" , ans, ans1);//输出
	else 
		printf("%d", ans1);//输出-1
	
	return 0;
}



//我的代码比较结构化，容易理解
//在此也建议大家多用用string类，c++有关于string的特大好处，c和pascal都没有哦
//
//定义头文件
#include <iostream>
#include <string>
//命名空间
using namespace std;
int main(){
    //定义两个字符串
    string a;
    string b;
    //用string库，调用getline, 直接读入一整行
    getline(cin,a);
    getline(cin,b);
    //转换大小写，可以都转换为大写，或者小写
    for (int i=0;i<a.length();++i){
        a[i]=tolower(a[i]);
    }
    for (int i=0;i<b.length();++i){
        b[i]=tolower(b[i]);
    }
    //因为连起来的不算，所以要在前后加几个空格，一定要是同样多的，同量减同量，等于同量
    a=' '+a+' ';
    b=' '+b+' ';
    //先看看会不会找不到，用a.find()和string::npos
    if (b.find(a)==string::npos){
        cout<<-1<<endl;
    }
    //如果找得到
    else {
        int alpha=b.find(a);
        int beta=b.find(a),s=0;//计数器初始化为0
        while (beta!=string::npos){
            ++s;//计数器
            beta=b.find(a,beta+1);
        }
        cout<<s<<" "<<alpha<<endl;//输出第一个和总共有几个
    }
    //函数返回值为0，结束整个程序
    return 0;
}
