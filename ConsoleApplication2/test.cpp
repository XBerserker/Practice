#include "head.h"
//#include <climits>

void test_3_2()
{//��Ŀ����дһ�γ���ӱ�׼������һ�ζ���һ���У�Ȼ���޸ĸó���ʹ��һ�ζ���һ����
	string line1;
	string line2;

	//cout << "�޸�ǰ��" << endl;
	//while (getline(cin, line1))
	//	cout << line1 << endl;

	cout << "�޸ĺ�:" << endl;
	while (cin >> line1)
		cout << line1 << endl;

}

void test_3_3()
{//��Ŀ����˵��string��������������getline�����ֱ�����δ���հ��ַ��ġ�

	//˽��Ϊ��string�������������ǽ��հ��ַ������ָ���������ģ�
	//Ȼ��getline�������ǽ��հ��ַ�����һ����ַ�����һͬ���뻺���У�Ȼ�����ʱһ�����������

}

void test_3_4()
{//��Ŀ����дһ�γ�����������ַ������Ƚ����Ƿ���ȣ������������������ȣ�
	//����ϴ���Ǹ��ַ�������д�������򣬱Ƚ�����������ַ����Ƿ�ȳ���������ȳ���
	//������Ƚϴ���Ǹ��ַ�����
	string s1;
	string s2;

	cout << "�����һ���ַ�����";
	cin >> s1;
	cout << "����ڶ����ַ�����";
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
{//��Ŀ����дһ�γ���ӱ�׼�����ж������ַ�����������������һ��
	//������ӳɵĴ��ַ�����Ȼ���޸����������ÿո������Ķ���ַ����ָ�����

	string s1, s2;
	string s3;

	cout << "�����һ���ַ�����";
	cin >> s1;
	cout << "����ڶ����ַ�����";
	cin >> s2;
	
	s1 = s1 + " " + s2;

	cout << s1 << endl;

}

void test_3_6()
{//��Ŀ����дһ�γ���ʹ�÷�Χfor��佫�ַ����ڵ������ַ���X���档
	string line1("lucifer");

	cout << line1 << endl;

	for (auto &c : line1){
		c = 'X';
	}

	cout << line1 << endl;

}

void test_3_7()
{
	//��Ŀ������һ����ɵĳ�����ԣ������ѭ�����Ʊ�����������Ϊchar���ᷢ��ʲô���ȹ���һ�½����Ȼ��ʵ�ʱ�̽�����֤

	//Ԥ�ƣ����Ӧ�û��ǻ�һ����
	string line1("lucifer");
	cout << line1 << endl;
	for (char &c : line1){
		c = 'X';
	}
	cout << line1 << endl;

	//�������Ԥ�Ƶ�һģһ��
}

void test_3_8()
{
	//��Ŀ���ֱ���whileѭ���ʹ�ͳ��forѭ����д��һ��ĳ��������������ʽ�����أ�Ϊʲô

	//�ش��Ҿ���������ʽ�����ðɣ���Ҫ�ǿ����˵�ʹ��ϰ�����İɣ����˵�ʹ��ϰ����ƫ����ʹ��forѭ���ģ������һ���ô�ͳ��forѭ������ʽ����ã���Ϊд�ú�˳�֡�

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
	//��Ŀ������ĳ����к����ã����Ϸ���������Ϸ���Ϊʲô��

	//�ش𣺲��Ϸ�����Ϊs[0]��������δ����ģ��鱾��ǰ����½��н���

	string s;
	cout << s[0] << endl;
}

void test_3_10()
{
	//��Ŀ����дһ�γ��򣬶���һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ��֡�

	string line("I will be better!Yes I can do it!");

	for (auto c : line){
		if (!ispunct(c))
			cout << c;
	}
	cout << endl;


}

void test_3_11()
{
	//��Ŀ�������for���Ϸ�������Ϸ���c��������ʲô��

	//�ش𣺺Ϸ���c������Ӧ����char�ͣ�Ȼ���ܸı�c��ֵ��c��������һ����������

	const string s = "Keep out!";
	for (auto &c : s){ /*...*/	}
}

void test_3_12()
{
	//��Ŀ������vector����Ķ����в���ȷ��������У���ָ������������ȷ�ģ�������ִ�н�������ڲ���ȷ�ģ�˵�������ԭ��
	
	//(a)vector<vector<int>> ivec;
	//(b)vector<string> svec = ivec;
	//(c)vector<string> svec(10, "null");

	//�ش𣺲���ȷ���У���b������a���ͣ�b��Ӧ������ȷ�ģ���һ�����Ƕ�����һ��vector��������Ƕ����һ��vector������װ����int�����ݣ�ִ��Ĭ�ϳ�ʼ�����������ǹ����ʼ�������������10�����ݣ�ֵΪ"null"
	//�ڶ����������ڣ����Ͳ�ƥ��
}

void test_3_13()
{
	//��Ŀ�����е�vector������������ٸ�Ԫ�أ���ЩԪ�ص�ֵ�ֱ��Ƕ��٣�
	//(a)vector<int> v1;				��һ���յ�vector����ִ��Ĭ�ϳ�ʼ����
	//(b)vector<int> v2(10);			������10��Ԫ�أ���ЩԪ�ص�ֵ����0.	
	//(c)vector<int> v3(10, 42);		������10��Ԫ�أ���ЩԪ�ص�ֵ����42.
	//(d)vector<int> v4{10};			������1��Ԫ�أ�Ԫ�ص�ֵ��10.
	//(e)vector<int> v5{10, 42};		������2��Ԫ�أ�Ԫ�ص�ֵ�ֱ���10��42
	//(f)vector<string> v6{10};			������1��Ԫ�أ�Ԫ��ֵΪ10.		//���󣬽��Ϊ��
	//(g)vector<string> v7{10, "hi"};	������2��Ԫ�أ�Ԫ��ֵΪ10 ��"hi"��
}

void test_3_14()
{
	//��Ŀ����дһ�γ�����cin����һ�������������Ǵ���һ��vector����

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
	//��Ŀ����д����ĳ��򣬲�����ζ�������ַ���
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
	//��Ŀ����дһ�γ��򣬰���ϰ3.13��vector����������;����������������������֮ǰ�Ļش��Ƿ���ȷ��������ԣ��ع�ͷ����ѧϰ3.3.1��ֱ��Ū���״��ںδ�Ϊֹ��
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
	//��Ŀ����cin����һ��ʲ������Ǵ���һ��vector����Ȼ���跨�����дʶ���дΪ��д��ʽ������ı��Ľ����ÿ����ռһ�С�
	vector<string> vec;
	string s;
	cout << "��cin����һ��ʲ������Ǵ���һ��vector����" << endl;
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
	//��Ŀ������ĳ���Ϸ���������Ϸ�����׼������޸ģ�
	//vector<int> ivec;
	//ivec[0] = 42;
	//�ش𣺲��Ϸ�
	//�޸Ĵ����£�
	vector<int> ivec;
	ivec.push_back(42);
	for (auto &i : ivec) {
		cout << i << endl;
	}
}

void test_3_19()
{
	//��Ŀ������붨��һ������10��Ԫ�ص�vector��������Ԫ�ص�ֵ����42�����оٳ����ֲ�ͬ��ʵ�ַ��������ַ������ã�Ϊʲô��

	//1
	vector<int> v1(10, 42);

	//2
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(42);
	}

	//3
	vector<int> v3{ 42,42,42,42,42,42,42,42,42,42 };

	//������Ϊ��һ�ַ����ȽϺ�
}

void test_3_20()
{
	//��Ŀ������һ�������������Ǵ���һ��vector���󣬽�ÿ�����������ĺ������������д��ĳ������Ҫ���������1�������1��Ԫ�صĺͣ����������2���͵�����2���ĺͣ��Դ�����
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
	//��Ŀ��ʹ�õ���������3.16
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
	//��Ŀ���޸�֮ǰ�Ǹ����text��һ�εĳ������Ȱ�text�ĵ�һ��ȫ���ĳɴ�д��ʽ��Ȼ�����������
	string text = "hello i am lvtao";
	cout << text << endl;
	for (auto it = text.begin(); it != text.end() && !isspace(*it); ++it) {
		*it = toupper(*it);
	}
	cout << text << endl;
}

void test_3_23()
{
	//��Ŀ����дһ�γ��򣬴���һ������10��������vector����Ȼ��ʹ�õ�����������Ԫ�ص�ֵ�����ԭ�������������vector��������ݣ���������Ƿ���ȷ��
	vector<int> vec(10, 6);

	//ԭ�����
	for (auto it = vec.cbegin(); it != vec.cend(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
	
	for (auto it = vec.begin(); it != vec.end(); it++) {
		*it *= 2;
	}

	//�����Ľ��
	for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
		cout << *it << "  ";
	}
	cout << endl;
}

void test_3_24()
{
	//��Ŀ����ʹ�õ���������94ҳ���һ��

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
	//��Ŀ��3.3.3�ڣ���93ҳ�����ַ����εĳ�����ʹ���±������ʵ�ֵģ������õ�������д�ó���ʵ����ȫ��ͬ�Ĺ���
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
	//��Ŀ����100ҳ�Ķ������������У�Ϊʲô�õ���mid=beg+(end-beg)/2������mid=(beg+end)/2;��
	
	//��Ϊ���߲�����ͨ����
}

void test_3_27()
{
	//��Ŀ������txt_size��һ���޲εĺ��������ķ���ֵ��int����ش������Ǹ������ǷǷ��ģ�Ϊʲô��
	//unsigned buf_size = 1024;
	//(a)int ia[buf_size];
	//(b)int ia[4 * 7 - 14];
	//(c)int ia[txt_size()];
	//(d)char st[11] = "fundamental";

	//���ֻ��B���ǺϷ��ģ����඼�ǷǷ��ġ�a��buf_size���ǳ�����c��txt_size()���ص���int����һ���������ͣ�d���ַ������Ȳ���
}

void test_3_28()
{
	//����������Ԫ�ص�ֵ��ʲô��
	string sa[10];	//������Ԫ�ص�ֵ���ַ���
	int ia[10];		//����Ԫ��
	//int main() {	
		string sa2[10];		//ͬ��
		int ia2[10];		//ͬ��
//	}
}

void test_3_29()
{
	//��Ŀ�������vector��˵����������Щȱ�㣬���о�һЩ
	//ȱ���У�
	//1�����ȹ̶�
	//2��
}

void test_3_30()
{
	//��Ŀ��ָ����������е���������
	//constexpr size_t array_size = 10;
	//int ia[array_size];
	//for (size_t ix = 1; ix <= array_size; ++ix)
	//	ia[ix] = ix;
	//���forѭ���еġ�=����Ҫȥ������������Խ��
}

void test_3_31()
{
	//��Ŀ����дһ�γ��򣬶���һ������10��int�����飬��ÿ��Ԫ�ص�ֵ�������±�ֵ��
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
	//��Ŀ������һ��ոմ��������鿽��������һ�����顣����vector��д����ʵ�����ƵĹ���

}

void test_3_33()
{
	//��Ŀ������104ҳ�ĳ�����˵���������ʼ��scores������ʲô��
	//����õ�δ֪��ֵ�����߱���������
}

void test_3_34()
{
	//��Ŀ���ٶ�p1��p2ָ��ͬһ�������е�Ԫ�أ����������Ĺ�����ʲô��ʲô����¸ó����ǷǷ��ģ�
	//p1 += p2 -p1;
	//����ָ������ǷǷ��ģ���

}

void test_3_35()
{
	//��Ŀ����дһ�γ�������ָ�뽫�����е�Ԫ����Ϊ0
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
	//��дһ�γ��򣬱Ƚ����������Ƿ���ȡ���дһ�γ��򣬱Ƚ�����vector�����Ƿ����
	//int ia[10], ib[10];
	//for (int i = 0; i < 10; i++) {
	//	ia[i] = ib[i] = i;
	//}
	//for (int i = 0; i < 10; i++) {
	//	if (ia[i] != ib[i]) {
	//		cout << "���鲻���" << endl;
	//		break;
	//	}
	//}
	//cout << "�������" << endl;

	vector<int> v1(10, 1);
	vector<int> v2(10, 2);

	if (v1 == v2) {
		cout << "����vector�������" << endl;
	}
	else
	{
		cout << "����vector�������" << endl;
	}
}

void test_3_37()
{
	//��Ŀ������ĳ����Ǻκ��壬�������������ʲô��
	const char ca[] = { 'h','e','l','l','o' };
	const char *cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}

	//�ĳ���ĺ������ÿ�����һ�������е��ַ���Ȼ������������������һЩδ֪���ַ�
}

void test_3_38()
{
	//��Ŀ���ڱ����������ᵽ��������ָ��������������ǷǷ��ģ�����Ҳûʲô���塣����Ϊʲô����ָ�����ûʲô���壿
	//��������ֹ�ڽ�ָ����мӷ����㣬��Ϊ����������ģ������Ϊ������ӣ��޷��ҵ��������Ч���⡣��ָ������Ľ����ʾ���Ԫ��������ָ���ֵʵ��Ϊ���Ե�ַ��������ģ�����������һ���Ƚϡ�����ָͬ�����ָ��ͬһ�������ǵ�ֵ������ȡ�
}

void test_3_39()
{
	//��Ŀ����дһ�γ��򣬱Ƚ�����string�����ٱ�һ�γ��򣬱Ƚ�����C����ַ��������ݡ�
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
			cout << "���" << endl;
		}
		else
		{
			cout << "�����" << endl;
		}
		break;
	case 2:
		if (!strcmp(s1, s2)) {
			cout << "2���" << endl;
		}
		else
		{
			cout << "2�����" << endl;
		}
	default:
		break;
	}
}

void test_3_40()
{
	//��Ŀ����дһ�γ��򣬶��������ַ����鲢���ַ�������ֵ��ʼ�����ǣ������ٶ���һ���ַ�������ǰ�����������Ӻ�Ľ����ʹ��strcpy��strcat��ǰ������������ݿ����������������С�
	char s1[100] = { "hello" };
	char s2[] = { "world" };
	char s3[11] = {};

	strcpy(s3, strcat(s1, s2));
	printf("%s\n", s3);

}

void test_3_41()
{
	//��Ŀ����дһ�γ��������������ʼ��һ��vector����
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
	//��Ŀ����дһ�γ��򣬽���������Ԫ�ص�vector���󿽱���һ����������
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
	//��Ŀ����д3����ͬ�汾�ĳ�������������ia��Ԫ�ء��汾1ʹ�÷�Χfor������������̣��汾2�Ͱ汾3��������ͨ��for��䣬���а汾2Ҫ�����±���������汾3Ҫ����ָ�롣���⣬������3���汾�ĳ����ж�Ҫֱ��д���������ͣ�������ʹ�����ͱ�����auto�ؼ��ֻ�decltype�ؼ��֡�
	
	int ia[3][4];
	int num = 1;
	//��ʼ��
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			ia[i][j] = num++;
		}
	}

	cout << "�汾1" << endl;
	for (auto &row : ia) {
		for (auto &col : row) {
			cout << col << "  ";
		}
		cout << endl;
	}

	cout << "�汾2" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << "  ";
		}
		cout << endl;
	}

	cout << "�汾3" << endl;
	for (int(*p)[4] = begin(ia); p != end(ia); ++p) {
		for (int *q = begin(*p); q != end(*p); ++q) {
			cout << *q << "  ";
		}
		cout << endl;
	}
}

void test_3_44()
{
	//��Ŀ����д��һ����ϰ�еĳ���ʹ�����ͱ���������ѭ�����Ʊ��������͡�

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
	//��Ŀ����һ�θ�д�������ʹ��auto�ؼ��֡�

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
	//��Ŀ�����ʽ5+10*20/2����ֵ����Ƕ��٣�
	//����ǣ�105

	int result = 5 + 10 * 20 / 2;

	cout << result << endl;
}

void test_4_2()
{
	//��Ŀ������4.12���еı����������ʽ�ĺ���λ��������ţ�ʹ��������ź������������˳�����������ǰһֱ��
	//��a�� *(vec.begin())		��b��(*(vec.begin())) + 1

}

void test_4_3()
{
	//��Ŀ��C++����û����ȷ�涨�������Ԫ���������ֵ˳�򣬸��������Ż���������ء����ֲ���ʵ�������ڴ�������Ч�ʺͳ���Ǳ��ȱ��֮�������Ȩ�⣬
	//����Ϊ����Խ�������˵��������ɡ�

	//�ش�
}

void test_4_4()
{
	//��Ŀ��������ı��ʽ��������ţ�˵������ֵ�Ĺ��̼����ս������д�������ã��������ŵģ����ʽ�����������֤֮ǰ���ƶϡ�
	//	12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
	//	((12 / 3 * 4) + (5 * 15)) + (24 % 4 / 2) = 16 + 75 + 0 = 91
	int i = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << i << endl;
}

void test_4_5()
{
	//��Ŀ��д�����б��ʽ����ֵ�����
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
	//��Ŀ��д��һ�����ʽ����ȷ��һ����������������ż����
	int num;
	cin >> num;

	if (!num % 2) {
		//����ż��
	}
	else
	{
		//��������
	}
}

void test_4_7()
{
	//��Ŀ������Ǻκ��壿д��������������ı��ʽ��
	//�ش�����ĺ����ǣ����ʽ��ֵ�����˸ñ��ʽ���͵����ֵ

	int imax = INT32_MAX + 1;
	cout << imax << "  ";
	short smax = INT16_MAX + 1;
	cout << smax << "  ";
	char cmax = 256;
	cout << cmax + 1 << "  ";
}

void test_4_8()
{
	//��Ŀ��˵�����߼��롢�߼����������������������ֵ��˳��
	//����������������������������ȼ���ߣ���������������
	//��Σ������߼�������ȼ����߼��������������ж��������ߵı��ʽ����Ϊ0�򷵻�0���������������ұߵı��ʽ
	//��󣬾����߼�������ȼ����߼����������������ж��������ߵı��ʽ����Ϊ1�򷵻�1���������������ұߵı��ʽ��
}

void test_4_9()
{
	//��Ŀ�������������if������������ֵ��жϹ��̡�
	const char *cp = "Hello World";
	if (cp&&*cp) {
		//�������ʽ���жϹ���Ӧ���ǣ�
		//�ȼ����߼���������ұߵı��ʽ����Ϊ�����÷������ȼ����߼�������ȼ�Ҫ�ߣ��ж��䷵��ֵ�Ƿ�Ϊ1�������ж�*cp�Ƿ���ֵ������Ϊ1������ж�cp��ֵ
	}
}

void test_4_10()
{
	//��Ŀ��Ϊwhileѭ��дһ��������ʹ��ӱ�׼�����ж�ȡ����������42ʱֹͣ
	int num;
	while (cin >> num && num != 42) {
		cout << "continue~" << endl;
	}
	cout << "End~";
}

void test_4_11()
{
	//��Ŀ����дһ�����ʽ���ڲ���4��ֵa��b��c��d�Ĺ�ϵ��ȷ��a����b��b����c��c����d��

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > b&&b > c&&c > d) {

	}
}

void test_4_12()
{
	//��Ŀ������i,j��k������������˵�����ʽi!=j<k �ĺ���
	//�ش��ȼ���j<k���صĽ��ֵ��0����1��Ȼ������iȥ���������ֵ�Ƚϡ���
}

void test_4_13()
{
	//��Ŀ������������У�����ֵ��ɺ�i��d��ֵ�ֱ��Ƕ��٣�
	int i; double d;
	//(a) d = i = 3.5;			(b) i = d = 3.5;
	//a���ʽi=3,d=3.0��b���ʽi=3,d=3.5
	d = i = 3.5;
	cout << d << "  " << i << endl;
	i = d = 3.5;
	cout << d << "  " << i << endl;

}

void test_4_14()
{
	//��Ŀ��ִ������if���󽫷���ʲô�����
	//if(42 = i) // ...		�޷�����ͨ������
	//if(i = 42) // ...		�ж�������ԶΪ��
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
	//��Ŀ������ĸ�ֵ�ǷǷ��ģ�Ϊʲô��Ӧ������޸ģ�
	//double dval; int ival; int *pi;
	//dval = ival = pi = 0;

	//��Ϊpi��ָ�룬���ӽ����÷�ʹ�õ��ǵ�ַ��������ı���ȫ����ָ֪�����͵ģ������޷���ֵ

	double dval; int ival; int *pi;
	dval = ival = *pi = 0;
}

void test_4_16()
{
	//��Ŀ��������������Ϸ���������ʵ��ִ�е���Ϊ���ܺ�Ԥ�ڲ���һ����Ϊʲô��Ӧ������޸ģ�
	//if (p = getPtr() != 0)		(b) if (i = 1024)
	//a:!=����������ȼ��ȸ�ֵ����������ȼ�Ҫ�ߣ�
	//b:���Ǹ�ֵ���������������Ϊ==
}

void test_4_17()
{
	//��Ŀ��˵��ǰ�õ���������ͺ��õ��������������
	//ǰ�ð汾��������ʽ����������Ƚ���������1�����1����Ȼ�󽫸ı��Ķ�����Ϊ��ֵ�Ľ����
	//���ð汾��Ҳ�Ὣ��������1�����1����������ֵ������������ı�֮ǰ�Ǹ�ֵ�ĸ�����
}

void test_4_18()
{
	//��Ŀ�������132ҳ�Ǹ����vector����Ԫ�ص�whileѭ��ʹ��ǰ�õ�������������õ�ʲô�����
	//���õ��Ľ�������һλ
}

void test_4_19()
{
	//��Ŀ������ptr��������ָ��int��ָ�롢vec��������vector<int>��ival��������int��˵������ı��ʽ�Ǻκ��壿����б��ʽ����ȷ��Ϊʲô��Ӧ������޸ģ�
	//(a) ptr != 0 && *ptr++			(b) ival++ && ival
	//(c) vec[ival++] <= vec[ival]

	//int *ptr; vector<int> vec; int ival;

	//ptr != 0 && *ptr++;
	//ival++ && ival;
	//vec[ival++] <= vec[ival];

}

void test_4_20()
{
	//��Ŀ������iter��������vector<string>::iterator��˵������ı��ʽ�Ƿ�Ϸ�������Ϸ������ʽ�ĺ�����ʲô��������Ϸ������ںδ���
	//(a)*iter++;		(b)(*iter)++		(c)*iter.empty()
	//(d)iter->empty();	(e)++*iter;			(f)iter++->empty();

	//�ش�
}

void test_4_21() {
	//��Ŀ����дһ�γ���ʹ�������������vector<int>���Ҵ���ЩԪ�ص�ֵ��������Ȼ����Щ����ֵ������
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
	//��Ŀ����дһ��������������ʹ�䷵����������ò��Ҹ��������10��string���󡣲�Ҫʹ��β�÷������͡�decltype�������ͱ�����
	string (*func())[10];
}

void test_6_37() {
	//��Ŀ��Ϊ��һ��ĺ�����д����������һ��ʹ�����ͱ�������һ��ʹ��β�÷������ͣ����һ��ʹ��decltype�ؼ��֡������������ʽ�ã�Ϊʲô��
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

	//�Ҿ��õ÷��������������ڲ����ر��ӵģ��Ҿ���Ӧ�������ͱ����ȽϺ��ã����ǣ���������ر��ӵ�����£��Ҿ������±�׼���Ǹ�β�÷�����������õ��ˡ�


}

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };

void test_6_38() {
	//��Ŀ���޸�arrPtr������ʹ�䷵�����������
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