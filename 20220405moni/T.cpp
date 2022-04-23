#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
 
int toDec(string str) {
	int len = str.length();
	int i = 1, dec = 0;
    for (int j = 0; j < len; j++) { //将16进制转成10进制
        if (str[j] >= '0' && str[j] <= '9') {
			dec += ((str[j] - '0') * pow(16, (len - i)));
		}
		else if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')) {
			dec += ((str[j] - 'A' + 10) * pow(16, (len - i)));
		}
		i++;
	}
	return dec;
}
 
string toOct(int num) {
	string s = "";
	while (num != 0) { //将10进制转成8进制
		string c = "";
		c += ('0' + (num % 8));
		s.insert(0, c);
		num /= 8;
	}
	return s;
}
 
int main()
{
	int n;
	cin >> n;                     //请输入有几组数据
	cin.get();                    //将cin >> n后面的回车符号读取了
	vector<string> vs;
	string sbuf;
	while (n--) {                 //具体的输入数据
		getline(cin, sbuf);
		vs.push_back(sbuf);
	}
	for (vector<string>::iterator it = vs.begin(); it != vs.end(); ++it) {
		int ibuf = toDec(*it);        //先将16进制转成10进制
		*it = toOct(ibuf);            //再将10进制转成8进制
		cout << *it << endl;          //直接输出
	}
	return 0;
}