#include "head.h"
//#include <climits>

void test_3_2()
{//题目：编写一段程序从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词
	string line1;
	string line2;

	//cout << "修改前：" << endl;
	//while (getline(cin, line1))
	//	cout << line1 << endl;

	cout << "修改后:" << endl;
	while (cin >> line1)
		cout << line1 << endl;

}

void test_3_3()
{//题目：请说明string类的输入运算符和getline函数分别是如何处理空白字符的。

	//私以为：string类的输入运算符是将空白字符当作分隔符来处理的，
	//然后getline函数则是将空白字符当成一般的字符处理，一同存入缓存中，然后输出时一并输出。。。

}

void test_3_4()
{//题目：编写一段程序读入两个字符串，比较其是否相等，并输出结果。如果不相等，
	//输出较大的那个字符串。改写上述程序，比较输入的两个字符传是否等长，如果不等长，
	//输出长度较大的那个字符串。
	string s1;
	string s2;

	cout << "读入第一个字符串：";
	cin >> s1;
	cout << "读入第二个字符串：";
	cin >> s2;

	if (s1 != s2){
		if (s1 > s2){
			cout << s1 << endl;
		}
		else{
			cout << s2 << endl;
		}
	}

	if (s1.size() != s2.size()){
		if (s1.size() > s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
	}
}

void test_3_5()
{//题目：编写一段程序从标准输入中读入多个字符串并将它们连接在一起，
	//输出链接成的大字符串。然后修改上述程序，用空格把输入的多个字符串分隔开来

	string s1, s2;
	string s3;

	cout << "输入第一个字符串：";
	cin >> s1;
	cout << "输入第二个字符串：";
	cin >> s2;
	
	s1 = s1 + " " + s2;

	cout << s1 << endl;

}

void test_3_6()
{//题目：编写一段程序，使用范围for语句将字符串内的所有字符用X代替。
	string line1("lucifer");

	cout << line1 << endl;

	for (auto &c : line1){
		c = 'X';
	}

	cout << line1 << endl;

}

void test_3_7()
{
	//题目：就上一题完成的程序而言，如果将循环控制变量的类型设为char将会发生什么？先估计一下结果，然后实际编程进行验证

	//预计：结果应该还是会一样。
	string line1("lucifer");
	cout << line1 << endl;
	for (char &c : line1){
		c = 'X';
	}
	cout << line1 << endl;

	//结果：和预计的一模一样
}

void test_3_8()
{
	//题目：分别用while循环和传统的for循环重写第一题的程序，你觉得哪种形式更好呢？为什么

	//回答：我觉得哪种形式都差不多好吧，主要是看个人的使用习惯来的吧，本人的使用习惯是偏向于使用for循环的，所以我会觉得传统的for循环的形式会更好，因为写得很顺手。

	string line("lucifer");
	cout << line << endl;
	for (int i = 0; i < line.size(); i++)
		line[i] = 'X';
	cout << line << endl;

	int i = 0;
	while (i < line.size()){
		line[i] = 'X';
		i++;
	}
	cout << line << endl;
}

void test_3_9()
{
	//题目：下面的程序有何作用？它合法吗？如果不合法，为什么？

	//回答：不合法，因为s[0]这样子是未定义的，书本中前面的章节有讲。

	string s;
	cout << s[0] << endl;
}

void test_3_10()
{
	//题目：编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。

	string line("I will be better!Yes I can do it!");

	for (auto c : line){
		if (!ispunct(c))
			cout << c;
	}
	cout << endl;


}

void test_3_11()
{
	//题目：下面的for语句合法吗？如果合法，c的类型是什么？

	//回答：合法，c的类型应该是char型，然后不能改变c的值，c的引用是一个常量……

	const string s = "Keep out!";
	for (auto &c : s){ /*...*/	}
}

void test_3_12()
{
	//题目：下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，描述其执行结果；对于不正确的，说明其错误原因
	
	//(a)vector<vector<int>> ivec;
	//(b)vector<string> svec = ivec;
	//(c)vector<string> svec(10, "null");

	//回答：不正确的有：（b）；（a）和（b）应该是正确的，第一个就是定义了一个vector对象，里面嵌套了一个vector，里面装的是int型数据，执行默认初始化；第三个是构造初始化，结果就是有10个数据，值为"null"
	//第二个错误在于，类型不匹配
}

void test_3_13()
{
	//题目：下列的vector对象各包含多少个元素？这些元素的值分别是多少？
	//(a)vector<int> v1;				是一个空的vector对象，执行默认初始化。
	//(b)vector<int> v2(10);			包含了10个元素，这些元素的值都是0.	
	//(c)vector<int> v3(10, 42);		包含了10个元素，这些元素的值都是42.
	//(d)vector<int> v4{10};			包含了1个元素，元素的值是10.
	//(e)vector<int> v5{10, 42};		包含了2个元素，元素的值分别是10和42
	//(f)vector<string> v6{10};			包含了1个元素，元素值为10.		//错误，结果为空
	//(g)vector<string> v7{10, "hi"};	包含了2个元素，元素值为10 和"hi"。
}

void test_3_14()
{
	//题目：编写一段程序，用cin读入一组整数并把它们存入一个vector对象。

	int n;
	vector<int> v;
	while (cin >> n) {
		v.push_back(n);
	}

	for (auto i : v) {
		cout << i << "  ";
	}
	//cout << endl;
}

void test_3_15()
{
	//题目：改写上题的程序，不过这次读入的是字符串
	string s;
	vector<string> vec;
	while (cin >> s) {
		vec.push_back(s);
	}
	for (auto i : vec) {
		cout << i << endl;
	}
}

void test_3_16()
{
	//题目：编写一段程序，把练习3.13中vector对象的容量和具体内容输出出来。检验你之前的回答是否正确，如果不对，回国头重新学习3.3.1节直到弄明白错在何处为止。
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10,42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	cout << "v1" << endl;
	for (auto i : v1) {
		cout << i << " ";	
	}
	cout << endl;

	cout << "v2" << endl;
	for (auto i : v2) {
		cout << i << " ";
	}
	cout << endl;

	cout << "v3" << endl;
	for (auto i : v3) {
		cout << i << " ";
	}
	cout << endl;

	cout << "v4" << endl;
	for (auto i : v4) {
		cout << i << " ";
	}
	cout << endl;

	cout << "v5" << endl;
	for (auto i : v5) {
		cout << i << " ";
	}
	cout << endl;

	cout << "v6" << endl;
	for (auto i : v6) {
		cout << i << " ";
	}
	cout << endl;

	cout << "v7" << endl;
	for (auto i : v7) {
		cout << i << " ";
	}
	cout << endl;
}

void test_3_17()
{
	//题目：从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改写为大写形式。输出改变后的结果，每个词占一行。
	vector<string> vec;
	string s;
	cout << "从cin读入一组词并把它们存入一个vector对象" << endl;
	while (cin >> s) {
		vec.push_back(s);
	}
	for (auto &i : vec) {
		cout << i << endl;
	}
	cout << endl;
	for (auto &i : vec) {
		for (auto &j : i) {
			if (j >= 'A'&&j <= 'Z') {
				
			}
			else {
				j -= 32;
			}
		}
	}
	for (auto &i : vec) {
		cout << i << endl;
	}
}

void test_3_18()
{
	//题目：下面的程序合法吗？如果不合法，你准备如何修改？
	//vector<int> ivec;
	//ivec[0] = 42;
	//回答：不合法
	//修改答案如下：
	vector<int> ivec;
	ivec.push_back(42);
	for (auto &i : ivec) {
		cout << i << endl;
	}
}

void test_3_19()
{
	//题目：如果想定义一个含有10个元素的vector对象，所有元素的值都是42，请列举出三种不同的实现方法。哪种方法更好？为什么？

	//1
	vector<int> v1(10, 42);

	//2
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(42);
	}

	//3
	vector<int> v3{ 42,42,42,42,42,42,42,42,42,42 };

	//个人认为第一种方法比较好
}

void test_3_20()
{
	//题目：读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出出来，改写你的程序，这次要求先输出第1个和最后1个元素的和，接着输出第2个和倒数第2个的和，以此类推
	vector<int> vec;
	int n;
	while (cin >> n)
		vec.push_back(n);
	auto len = vec.size();
	//for (int i = 0; i < len; i += 2) {
	//	if (i >= len-1)
	//		break;
	//	cout << vec[i] + vec[i + 1]<<"  ";
	//}
	int i, j;
	for (i = 0, j = len-1; i < len / 2; i++, j--) {
		cout << vec[i] + vec[j] << "  ";
	}
}

void test_3_21()
{
	//题目：使用迭代器重做3.16
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10,42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	cout << "v1" << endl;
	for (auto it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "v2" << endl;
	for (auto it = v2.begin(); it != v2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "v3" << endl;
	for (auto it = v3.begin(); it != v3.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "v4" << endl;
	for (auto it = v4.begin(); it != v4.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "v5" << endl;
	for (auto it = v5.begin(); it != v5.end(); it++) {
		cout << *it << " ";
	}

	cout << "v6" << endl;
	for (auto it = v6.begin(); it != v6.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "v7" << endl;
	for (auto it = v7.begin(); it != v7.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}

void test_3_22()
{
	//题目：修改之前那个输出text第一段的程序，首先把text的第一段全都改成大写形式，然后再输出他们
	string text = "hello i am lvtao";
	cout << text << endl;
	for (auto it = text.begin(); it != text.end() && !isspace(*it); ++it) {
		*it = toupper(*it);
	}
	cout << text << endl;
}

void test_3_23()
{
	//题目：编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值都变成原来的两倍。输出vector对象的内容，检验程序是否正确。
	vector<int> vec(10, 6);

	//原样输出
	for (auto it = vec.cbegin(); it != vec.cend(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
	
	for (auto it = vec.begin(); it != vec.end(); it++) {
		*it *= 2;
	}

	//运算后的结果
	for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
		cout << *it << "  ";
	}
	cout << endl;
}

void test_3_24()
{
	//题目：请使用迭代器重做94页最后一题

	vector<int> vec;
	int n;
	
	while (cin >> n)
		vec.push_back(n);

	auto len = vec.size() - 1;
	auto half = vec.size()/2;

	auto it_begin = vec.begin();
	int i, j;
	for (i = 0, j = len; i < half; i++, it_begin++,j--) {
		cout << *it_begin + *(it_begin + j) << "  ";
	}
}

void test_3_25()
{
	//题目：3.3.3节（第93页）划分分数段的程序是使用下标运算符实现的，请利用迭代器改写该程序并实现完全相同的功能
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	while (cin >> grade) {
		if (grade <= 100) {
			*(it + (grade / 10)) += 1;
		}
	}

	for (auto it_begin = scores.cbegin(); it_begin != scores.cend(); ++it_begin) {
		cout << *it_begin << "  ";
	}
}

void test_3_26()
{
	//题目：在100页的二分搜索程序中，为什么用的是mid=beg+(end-beg)/2，而非mid=(beg+end)/2;？
	
	//因为后者不具有通用性
}

void test_3_27()
{
	//题目：假设txt_size是一个无参的函数，它的返回值是int。请回答下列那个定义是非法的？为什么？
	//unsigned buf_size = 1024;
	//(a)int ia[buf_size];
	//(b)int ia[4 * 7 - 14];
	//(c)int ia[txt_size()];
	//(d)char st[11] = "fundamental";

	//解答：只有B答案是合法的，其余都是非法的。a中buf_size不是常量；c中txt_size()返回的是int不是一个常量类型，d中字符串长度不够
}

void test_3_28()
{
	//下列数组中元素的值是什么？
	string sa[10];	//数组中元素的值是字符串
	int ia[10];		//整型元素
	//int main() {	
		string sa2[10];		//同上
		int ia2[10];		//同上
//	}
}

void test_3_29()
{
	//题目：相比于vector来说，数组有哪些缺点，请列举一些
	//缺点有：
	//1、长度固定
	//2、
}

void test_3_30()
{
	//题目：指出下面代码中的索引错误
	//constexpr size_t array_size = 10;
	//int ia[array_size];
	//for (size_t ix = 1; ix <= array_size; ++ix)
	//	ia[ix] = ix;
	//解答：for循环中的“=”号要去掉，否则数组越界
}

void test_3_31()
{
	//题目：编写一段程序，定义一个含有10个int的数组，令每个元素的值就是其下标值。
	int ia[10];
	for (int i = 0; i < 10; i++) {
		ia[i] = i;
	}
	for (int i : ia) {
		cout << i << "  ";
	}
}

void test_3_32()
{
	//题目：将上一题刚刚创建的数组拷贝给另外一个数组。利用vector重写程序，实现类似的功能

}

void test_3_33()
{
	//题目：对于104页的程序来说，如果不初始化scores将发生什么？
	//将会得到未知的值，或者编译器报错
}

void test_3_34()
{
	//题目：假定p1和p2指向同一个数组中的元素，则下面程序的功能是什么？什么情况下该程序是非法的？
	//p1 += p2 -p1;
	//两个指针相加是非法的！？

}

void test_3_35()
{
	//题目：编写一段程序，利用指针将数组中的元素置为0
	int ia[10];
	int *p;
	for (int i = 0; i < 10; i++) {
		ia[i] = i;
	}
	for (int i : ia) {
		cout << i << " ";
	}
	cout << endl;
	p = ia;
	for (int i = 0; i < 10; i++) {
		*p = 0;
		p++;
	}
	for (int i : ia) {
		cout << i << "  ";
	}
	
}

void test_3_36()
{
	//编写一段程序，比较两个数组是否相等。再写一段程序，比较两个vector对象是否相等
	//int ia[10], ib[10];
	//for (int i = 0; i < 10; i++) {
	//	ia[i] = ib[i] = i;
	//}
	//for (int i = 0; i < 10; i++) {
	//	if (ia[i] != ib[i]) {
	//		cout << "数组不相等" << endl;
	//		break;
	//	}
	//}
	//cout << "数组相等" << endl;

	vector<int> v1(10, 1);
	vector<int> v2(10, 2);

	if (v1 == v2) {
		cout << "两个vector对象相等" << endl;
	}
	else
	{
		cout << "两个vector对象不相等" << endl;
	}
}

void test_3_37()
{
	//题目：下面的程序是何含义，程序的输出结果是什么？
	const char ca[] = { 'h','e','l','l','o' };
	const char *cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}

	//改程序的含义就是每行输出一个数组中的字符，然而程序的输出结果会多上一些未知的字符
}

void test_3_38()
{
	//题目：在本节中我们提到，将两个指针相加起来不但是非法的，而且也没什么意义。请问为什么两个指针相加没什么意义？
	//编译器禁止内建指针进行加法运算，因为那是无意义的：如果作为整数相加，无法找到结果的有效语意。。指针减法的结果表示相隔元素数。。指针的值实现为线性地址，是有序的，可以像整数一样比较。。不同指针可以指向同一对象，它们的值可以相等。
}

void test_3_39()
{
	//题目：编写一段程序，比较两个string对象。再编一段程序，比较两个C风格字符串的内容。
	int n;

	string str1, str2;
	char s1[] = { "hello" };
	char s2[] = { "hello" };
	cin >> n;
	switch (n)
	{
	case 1:
		str1 = "hello";
		str2 = "hello";
		if (str1 == str2) {
			cout << "相等" << endl;
		}
		else
		{
			cout << "不相等" << endl;
		}
		break;
	case 2:
		if (!strcmp(s1, s2)) {
			cout << "2相等" << endl;
		}
		else
		{
			cout << "2不相等" << endl;
		}
	default:
		break;
	}
}

void test_3_40()
{
	//题目：编写一段程序，定义两个字符数组并用字符串字面值初始化它们；接着再定义一个字符数组存放前两个数组连接后的结果。使用strcpy和strcat把前两个数组的内容拷贝到第三个数组中。
	char s1[100] = { "hello" };
	char s2[] = { "world" };
	char s3[11] = {};

	strcpy(s3, strcat(s1, s2));
	printf("%s\n", s3);

}

void test_3_41()
{
	//题目：编写一段程序，用整型数组初始化一个vector对象
	int ia[10];
	for (int i = 0; i < 10; i++) {
		ia[i] = i;
	}
	vector<int> v1(begin(ia), end(ia));
	for (auto &i : v1) {
		cout << i << "  ";
	}

}

void test_3_42()
{
	//题目：编写一段程序，将含有整数元素的vector对象拷贝给一个整型数组
	vector<int> v1(10, 3);
	int ia[10];
	int j = 0;
	for (auto i : v1) {
		ia[j++] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << ia[i] << " ";
	}
} 

void test_3_43()
{
	//题目：编写3个不同版本的程序，令其均能输出ia的元素。版本1使用范围for语句管理迭代过程；版本2和版本3都是用普通的for语句，其中版本2要求用下标运算符，版本3要求用指针。此外，在所有3个版本的程序中都要直接写出数据类型，而不能使用类型别名、auto关键字或decltype关键字。
	
	int ia[3][4];
	int num = 1;
	//初始化
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			ia[i][j] = num++;
		}
	}

	cout << "版本1" << endl;
	for (auto &row : ia) {
		for (auto &col : row) {
			cout << col << "  ";
		}
		cout << endl;
	}

	cout << "版本2" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << "  ";
		}
		cout << endl;
	}

	cout << "版本3" << endl;
	for (int(*p)[4] = begin(ia); p != end(ia); ++p) {
		for (int *q = begin(*p); q != end(*p); ++q) {
			cout << *q << "  ";
		}
		cout << endl;
	}
}

void test_3_44()
{
	//题目：改写上一个练习中的程序，使用类型别名来代替循环控制变量的类型。

	int ia[3][4];
	int num = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			ia[i][j] = num++;
		}
	}

	using int_array = int[4];
	typedef int int_array[4];

	for (int_array *p = ia; p != ia + 3; ++p) {
		for (int *q = *p; q != *p + 4; ++q) {
			cout << *q << "  ";
		}
		cout << endl;
	}
}

void test_3_45()
{
	//题目：再一次改写程序，这次使用auto关键字。

	int ia[3][4];
	int num = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			ia[i][j] = num++;
		}
	}

	for (auto p = begin(ia); p != end(ia); ++p) {
		for (auto q = begin(*p); q != end(*p); ++q) {
			cout << *q << "  ";
		}
		cout << endl;
	}
}

void test_4_1()
{
	//题目：表达式5+10*20/2的求值结果是多少？
	//结果是：105

	int result = 5 + 10 * 20 / 2;

	cout << result << endl;
}

void test_4_2()
{
	//题目：根据4.12节中的表，在下述表达式的合理位置添加括号，使得添加括号后运算对象的组合顺序与添加括号前一直。
	//（a） *(vec.begin())		（b）(*(vec.begin())) + 1

}

void test_4_3()
{
	//题目：C++语言没有明确规定大多数二元运算符的求值顺序，给编译器优化留下了余地。这种策略实际上是在代码生成效率和程序潜在缺陷之间进行了权衡，
	//你认为这可以接受吗？请说出你的理由。

	//回答：
}

void test_4_4()
{
	//题目：在下面的表达式中添加括号，说明其求值的过程及最终结果。编写程序编译该（不加括号的）表达式并输出其结果验证之前的推断。
	//	12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
	//	((12 / 3 * 4) + (5 * 15)) + (24 % 4 / 2) = 16 + 75 + 0 = 91
	int i = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << i << endl;
}

void test_4_5()
{
	//题目：写出下列表达式的求值结果。
	//(a)-30 * 3 + 21 / 5 = -86			(b)-30 + 3 * 21 / 5 = -18
	//(c)30 / 3 * 21 % 5 = 0			(d)-30 / 3 * 21 % 4 = -2
	int a, b, c, d;
	a = -30 * 3 + 21 / 5;
	b = -30 + 3 * 21 / 5;
	c = 30 / 3 * 21 % 5;
	d = -30 / 3 * 21 % 4;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
}

void test_4_6()
{
	//题目：写出一条表达式用于确定一个整数是奇数还是偶数。
	int num;
	cin >> num;

	if (!num % 2) {
		//这是偶数
	}
	else
	{
		//这是奇数
	}
}

void test_4_7()
{
	//题目：溢出是何含义？写出三条导致溢出的表达式。
	//回答：溢出的含义是，表达式的值超出了该表达式类型的最大值

	int imax = INT32_MAX + 1;
	cout << imax << "  ";
	short smax = INT16_MAX + 1;
	cout << smax << "  ";
	char cmax = 256;
	cout << cmax + 1 << "  ";
}

void test_4_8()
{
	//题目：说明在逻辑与、逻辑或及相等运算符中运算对象求值的顺序
	//在这三个运算符中相等性运算符优先级最高，所以先求该运算符
	//其次，就是逻辑与的优先级，逻辑与的运算规则是判断运算符左边的表达式，若为0则返回0，否则计算运算符右边的表达式
	//最后，就是逻辑或的优先级，逻辑或的运算规则是先判断运算符左边的表达式，若为1则返回1，否则计算运算符右边的表达式。
}

void test_4_9()
{
	//题目：解释在下面的if语句中条件部分的判断过程。
	const char *cp = "Hello World";
	if (cp&&*cp) {
		//上述表达式的判断过程应该是：
		//先计算逻辑与运算符右边的表达式，因为解引用符的优先级比逻辑与的优先级要高，判断其返回值是否为1（即，判断*cp是否有值），若为1则继续判断cp的值
	}
}

void test_4_10()
{
	//题目：为while循环写一个条件，使其从标准输入中读取整数，遇到42时停止
	int num;
	while (cin >> num && num != 42) {
		cout << "continue~" << endl;
	}
	cout << "End~";
}

void test_4_11()
{
	//题目：书写一条表达式用于测试4个值a、b、c、d的关系，确保a大于b、b大于c、c大于d。

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > b&&b > c&&c > d) {

	}
}

void test_4_12()
{
	//题目：假设i,j和k是三个整数，说明表达式i!=j<k 的含义
	//回答：先计算j<k返回的结果值是0还是1，然后在用i去和这个返回值比较……
}

void test_4_13()
{
	//题目：在下述语句中，当赋值完成后i和d的值分别是多少？
	int i; double d;
	//(a) d = i = 3.5;			(b) i = d = 3.5;
	//a表达式i=3,d=3.0；b表达式i=3,d=3.5
	d = i = 3.5;
	cout << d << "  " << i << endl;
	i = d = 3.5;
	cout << d << "  " << i << endl;

}

void test_4_14()
{
	//题目：执行下述if语句后将发生什么情况？
	//if(42 = i) // ...		无法编译通过……
	//if(i = 42) // ...		判断条件永远为真
	int i;
	//if (i = 42) {
	//	cout << "zhen" << endl;	
	//}
	//else
	//{
	//	cout << "jia" << endl;
	//}
}

void test_4_15()
{
	//题目：下面的赋值是非法的，为什么？应该如何修改？
	//double dval; int ival; int *pi;
	//dval = ival = pi = 0;

	//因为pi是指针，不加解引用符使用的是地址，而后面的变量全都不知指针类型的，所以无法赋值

	double dval; int ival; int *pi;
	dval = ival = *pi = 0;
}

void test_4_16()
{
	//题目：尽管下面的语句合法，但他们实际执行的行为可能和预期并不一样，为什么？应该如何修改？
	//if (p = getPtr() != 0)		(b) if (i = 1024)
	//a:!=运算符的优先级比赋值运算符的优先级要高！
	//b:这是赋值运算符，相等运算符为==
}

void test_4_17()
{
	//题目：说明前置递增运算符和后置递增运算符的区别
	//前置版本，这种形式的运算符首先将运算对象加1（或减1），然后将改变后的对象作为求值的结果。
	//后置版本，也会将运算对象加1（或减1），但是求值结果是运算对象改变之前那个值的副本；
}

void test_4_18()
{
	//题目：如果第132页那个输出vector对象元素的while循环使用前置递增运算符，将得到什么结果？
	//所得到的结果向后移一位
}

void test_4_19()
{
	//题目：假设ptr的类型是指向int的指针、vec的类型是vector<int>、ival的类型是int，说明下面的表达式是何含义？如果有表达式不正确，为什么？应该如何修改？
	//(a) ptr != 0 && *ptr++			(b) ival++ && ival
	//(c) vec[ival++] <= vec[ival]

	//int *ptr; vector<int> vec; int ival;

	//ptr != 0 && *ptr++;
	//ival++ && ival;
	//vec[ival++] <= vec[ival];

}

void test_4_20()
{
	//题目：假设iter的类型是vector<string>::iterator，说明下面的表达式是否合法。如果合法，表达式的含义是什么？如果不合法，错在何处？
	//(a)*iter++;		(b)(*iter)++		(c)*iter.empty()
	//(d)iter->empty();	(e)++*iter;			(f)iter++->empty();

	//回答：
}

void test_4_21() {
	//题目：编写一段程序，使用条件运算符从vector<int>中找打那些元素的值是奇数，然后将这些奇数值翻倍。
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };

	for (auto i = vec.begin(); i != vec.end(); i++)
	{
		if (*i%2==1)
		{
			(*i) *= 2;
		}
	}
	for (auto i : vec) {
		cout << i << endl;
	}

}

void test_6_36() {
	//题目：编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象。不要使用尾置返回类型、decltype或者类型别名。
	string (*func())[10];
}

void test_6_37() {
	//题目：为上一题的函数再写三个声明，一个使用类型别名，另一个使用尾置返回类型，最后一个使用decltype关键字。你觉得那种形式好，为什么？
	//1
	typedef string str[10];
	//or
	using str = string[10];
	str *funcz();
	//2
	auto funcx()->string(*)[10];
	//3
	string str1[10] = { "s1", "s2" };
	decltype(str1) *funca();

	//我觉得得分情况来，如果对于不是特别复杂的，我觉得应该是类型别名比较好用，但是，如果类型特别复杂的情况下，我觉得用新标准的那个尾置返回类型是最好的了。


}

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };

void test_6_38() {
	//题目：修改arrPtr函数，使其返回数组的引用
	auto arrPtr(int i)->int(&)[5];
	int (&x)[5] = arrPtr(3);
	for (int i = 0; i < 5; i++) {
		cout << x[i] << "  ";
	}
	
}

auto arrPtr(int i)->int(&)[5]{

	return (i % 2) ? odd : even;
}


void test() {
	string S=NULL;
	cin >> S;

	cout << S.size();
}