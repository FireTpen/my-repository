#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int A, B;

	
	char op;
	while (1)
	{
		printf("������A op B �����������㣺\n");
		scanf("%d %c %d", &A, &op, &B);
		if (op == '+' || op == '-' || op == '*' || op == '/')
		{
			if (op == '/' && B == 0)
			{
				printf("Divided by 0");
			}
			else {
				int res;
				if (op == '+')
				{
					res = A + B;
				}
				else if (op == '-')
				{
					res = A - B;
				}
				else if (op == '*')
				{
					res = A * B;
				}
				else if (op == '/')
				{
					res = A / B;
				}
				printf("%d %c %d = %d\n", A, op, B, res);

			}
		}
	}
	return 0;
}
//int main()
//{
//	int score;
//	char grade;
//
//	printf("������һ������0-100:");
//	scanf("%d",&score);
//	if (score >= 90 && score <= 100)
//	{
//		grade = 'A';
//	}
//	else {
//		if (score >= 80)
//		{
//			grade = 'B';
//		}
//		else {
//			if (score >= 70)
//			{
//				grade = 'C';
//			}
//			else {
//				if (score >= 60)
//				{
//					grade = 'D';
//				}
//				else {
//					grade = 'E';
//				}
//			}
//		}
//	}
//	printf("%d: %c\n",score,grade);
//	return 0;
//}

//int main()
//{
//	int y, m, days;
//	while (1)
//	{
//		q1:
//		printf("������һ����ݺ��·ݵ�ֵ:");
//		scanf("%d %d", &y, &m);
//		if (m > 12 || m <= 0)
//		{
//			printf("������������,����������\n");
//			goto q1;
//		}
//		if (m == 2)
//		{
//			if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
//			{
//				days = 29;
//			}
//			else {
//				days = 28;
//			}
//		}
//		else if (m == 4 || m == 6 || m == 9 || m == 11)
//		{
//			days = 30;
//		}
//		else
//			days = 31;
//		/*else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//		{
//			days = 31;
//		}
//		*/	
//		printf("%d��%d�µ�����Ϊ%d\n", y, m, days);
//	}
//	return 0;
//}
//int main(void)
//{
//	int score;
//	while(1)
//	{
//		printf("������ѧ���ɼ���\n");
//		scanf("%d", &score);
//
//		if (score >= 90 && score <= 100)
//		{
//			printf("����ѧ���ɼ��ȼ�Ϊ��A\n");
//		}
//		else if (score >= 80 && score < 90)
//		{
//			printf("����ѧ���ɼ��ȼ�Ϊ��B\n");
//		}
//		else if (score >= 70 && score < 80)
//		{
//			printf("����ѧ���ɼ��ȼ�Ϊ��C\n");
//		}
//		else if (score >= 60 && score < 70)
//		{
//			printf("����ѧ���ɼ��ȼ�Ϊ��D\n");
//		}
//		else if (score >= 0 && score < 60)
//		{
//			printf("����ѧ���ɼ��ȼ�Ϊ��E\n");
//		}
//		else
//			printf("����������������������\n");
//	}
//	return 0;
//}

//int main()
//{
//	char x;
//	while (1)
//	{
//		printf("������һ��Xֵ:");
//		scanf("%d", &x);
//        if (x > 0)
//		{
//			printf("Y��ֵΪ��1\n");
//			
//		}else if (x < 0)
//		{
//			printf("Y��ֵΪ��-1\n");
//		}else
//			printf("Y��ֵΪ��0\n");
//	}
//	return 0;
//}
//int main()
//{
//	int score;
//	printf("������ѧ���ɼ���\n");
//	scanf("%d",&a);
//	if (score >= 60 && score <= 100)
//	{
//		printf("ѧ���ɼ�����\n");
//	}
//		else if (score > 0 && score < 60){
//			printf("ѧ���ɼ�������\n");
//		}else{
//			printf("������������\n");
//		}
//	return 0;
//}


//int main()
//{
//	int a, b, max;
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//
//	if (a > b)
//	{
//		max = a;
//		printf("�ϴ�ֵΪa:%d",max);
//	}
//	else if (a < b)
//	{
//		max = b;
//		printf("�ϴ�ֵΪb:%d", max);
//	}
//	else {
//		printf("a = b\n");
//	
//	}
//
//	return 0;
//
//}


//int main()
//{
//	int x, y;
//	printf("������һ��ֵ:\n");
//	scanf("%d",&x);
//	y = x;
//	if (x < 0)
//	{
//		y = -x;
//	}
//	printf("|%d| == %d\n",x,y);
//	return 0;
//}


//int main()
//{
//	int year;
//	while (1)
//	{
//		printf("������һ�����:\n");
//		scanf("%d", &year);
//
//		if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d��������\n", year);
//		}
//		else
//		{
//			printf("%d�겻������\n", year);
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	int ge, shi, bai, qian, n1, re;
//	n1 = 3057;
//	ge = n1 % 10;
//	shi = n1 / 10 % 10;
//	bai = n1 / 100 % 10;
//	qian = n1 / 1000 % 10;
//	printf("��λ��%d ʮλ��%d ��λ��%d ǧλ��%d",ge,shi,bai,qian);
//	re = (ge * 1000) + (shi * 100) + (bai * 10) + (qian);
//	printf("��ת�������λ��%d",re);
//
//	return 0;
//}

//int main()
//{
//	double a, b, c, s, area;
//	printf("������a,b,c�����ߵĳ���");
//	scanf("%lf %lf %lf",&a,&b,&c);
//
//	s = (a + b + c) / 2;
//
//	area = sqrt(s*(s - a)*(s - b)*(s - c));
//
//	printf("�������ε����Ϊ��%.5f",area);
//
//	return 0;
//}


//int main(void)
//{
//	double a, b, c, x1, x2;
//	printf("������a,b,c��������");
//	scanf("%lf %lf %lf",&a,&b,&c);
//
//	double deta = sqrt(b*b-4*a*c);
//	x1 = (-b + deta) / (2 * a);
//	x2 = (-b - deta) / (2 * a);
//
//	printf("x1 = %.2f\nx2 = %.2f\n",x1,x2);
//	return 0;
//}

//int main()
//{
//	int a, b, temp;
//	scanf("%d %d",&a,&b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//
//	c = b;
//	b = a;
//	a = c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//
//}
//int main(void)
//{
//	int a, b;
//
//	a = 10;
//	b = 20;//��ֵ���
//	; //���С�;����Ϊ����䣬ͨ�������ӳ�ѭ����ʱ��
//	printf("a = %d\n",a);
//	{
//		int  a = 50;
//		printf("a = %d\n",a);
//	}
//	return 0;
//}




//
//int main()
//{
//	int i = 1, j = 2, k = 3;
//	printf("%d\n",k||i++&&j-3);
//	printf("%d\n",i <= j && (k =! k));
//	printf("%d\n",i == 5 && (j = 8));
//	printf("i = %d,j = %d,k = %d\n", i, j, k);
//
//	return 0;
//}



//int main()
//{
//	int x;
//	printf("������һ����λ������\n");
//	scanf("%d\n",&x);
//
//	printf("�����İ�λΪ��%d\n������ʮλΪ:%d\n�����ĸ�λΪ��%d\n",x/100%10,x/10%10,x%10);
//
//	return 0;
//}



//int main()
//{
//	enum Weekday {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
//	enum Weekday w = Monday;
//
//	w = Wednesday;
//
//	printf("%d\n",w);
//
//
//
//	return 0;
//}


//int main()
//{
//	float x = 320.0f;
//	double y = 2.14e9;
//	long double z = 8.8L;
//
//	printf("%fҲ����д��%e\n",x,x);
//	printf("y��ֵ�� %e\n",y);
//	printf("z��ֵ�� %Lf\n",z);
//	printf("%d %d %d \n",sizeof(float),sizeof(double),sizeof(long double));
//	
//	return 0;
//}


//#include <limits.h>
//
//int main(void)
//{
//	int a, b;
//
//	a = INT_MAX;
//	b = a + 1;
//
//	printf("a = %d\n b = %d\n",a,b);
//	printf("a = %#X\n b = %#X\n",a,b);
//
//	return 0;
//}


//int main(void)
//{
//	char grade = 'A';
//	char level = 'FATE';
//	int x = 'FATE';
//	char ch = 97;
//
//	printf("grade = %c level = %c ch = %c x = %x\n",grade,level,ch,x);
//
//	return 0;
//}
//int main(void)
//{
//	int x = 5;
//	int y;
//	y = 6;
//	int z = x + y;
//	printf("z = %d\n",z);
//	printf("int��������ռ���ֽ�����%d",sizeof(int));
//	return 0;
//}


//int main(void)
//{
//	int s, n;
//
//	n = 10;
//	s = (n + 1) * n / 2;
//
//	printf("s = %d\n", s);
//
//	n = 100;
//	s = (n + 1) * n / 2;
//	printf("s = %d\n", s);
//
//	return 0;
//}


//int main(void)
//{
//	double radius, area;
//
//	printf("������һ��Բ�İ뾶��");
//	scanf("%lf",&radius);
//
//	area = 3.1415926 * radius * radius;
//
//	printf("�뾶Ϊ%.2fԲ�����Ϊ��%lf\n",radius,area);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	printf("5���رյ�ǰ�����\n");
//
//	//system("shutdowm -s -t 5 -f");
//
//	system("date/T");
//	system("calc.exe");
//	system("notepad.exe");
//	system("ipconfig");
//
//	return 0;
//
//}



//#include <stdio.h>
//#include <windows.h>
//
//
//#pragma comment(lib, "winmm")
//int main(void)
//{
//	printf("Hello,world!\n");
//	printf("�����������BoBo��������������");
//
//	PlaySound("Despacito.wav",NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
//
//	getch();
//
//	return 0;
//}
//
//
//

//#include <stdio.h>
//#include <windows.h>
//
//int main(void)
//{
//	printf("H");
//	Sleep(500);
//
//	printf("e");
//	Sleep(500);	
//
//	printf("l");
//	Sleep(500);	
//
//	printf("l");
//	Sleep(500);	
//
//	printf("o");
//	Sleep(500);
//
//	printf(",");
//	Sleep(500);
//
//	printf("w");
//	Sleep(500);
//
//	printf("o");
//	Sleep(500);	
//
//	printf("r");
//	Sleep(500);	
//
//	printf("l");
//	Sleep(500);	
//
//	printf("d");
//	Sleep(500);
//
//	printf("!");
//	Sleep(500);
//
//	printf("\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//	printf("\b\b ");
//	Sleep(500);
//
//
//	return 0;
//
//}
//int main(void)
//{
//	int i = 1;
//	int sum = 0;
//
//	while (i <= 10)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("1+2+3+...+10=%d\n",sum);
//
//	return 0;
//}
//void sayHello(void)
//{
//	printf("Hello world!\n");
//}
//int main(void)
//{
//	sayHello();
//	return 0;
//}
//int main(void)
//{
//	double x1;
//	double x2;
//
//	printf("�������һ������");
//	scanf("%lf", &x1);
//	printf("������ڶ�������");
//	scanf("%lf", &x2);
//
//	printf("%.2f * %.2f = %.2f\n", x1, x2, x1 * x2);
//
//
//	return 0;
//
//}


//#include <stdio.h>
//
//#define MAXHIST 15  //max length of histogram
//#define MAXWORD 11  //max length of a word
//#define IN      1   //inside a word
//#define OUT     0   //outside a word
//
//main()
//{
//	int c, i, nc, state;
//	int len;           //lengthe of each bar
//	int maxvalue;      //maximum value for wl[]
//	int ovflow;        //number of overflow words
//	int wl[MAXWORD];
//
//	state = OUT;
//	nc = 0;
//	ovflow = 0;
//	for (i = 0; i < MAXWORD; ++i)
//		wl[i] = 0;
//	while ((c = getchar()) != EOF) 
//	{
//		if (c == ' ' || c == '\n' || c == '\t')
//		{
//			state = OUT;
//			if (nc > 0)
//				if (nc < MAXWORD)
//					++wl[nc];
//				else
//					++ovflow;
//			nc = 0;
//		}
//		else if (state == OUT) 
//		{
//			state = IN;
//			nc = 1;
//		}
//		else
//			++nc;
//	}
//
//	maxvalue = 0;
//	for (i = 1; i < MAXWORD; ++i)
//		if (wl[i] > maxvalue)
//			maxvalue = wl[i];
//
//	for (i = 1; i < MAXWORD; ++i) 
//	{
//		printf("%5d - %5d :", i, wl[i]);
//		if (wl[i] > 0) 
//		{
//			if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
//				len = 1;
//		}
//		else
//			len = 0;
//		while (len > 0) 
//		{
//			putchar('*');
//			--len;
//		}
//		putchar('\n');
//	}
//	if (ovflow > 0)
//		printf("There are %d words >= %d\n", ovflow, MAXWORD);
//
//	return 0;
//}
//main()
//{
//	int c, i, nwhite, nother;
//	int ndigit[10];
//
//	nwhite = nother = 0;
//	for (i = 0; i < 10; ++i)
//		ndigit[i] = 0;
//
//	while ((c = getchar()) != EOF)
//	{
//		if (c >= '0' && c <= '9')
//			++ndigit[c - '0'];
//		else if (c == ' ' || c == '\n' || c == '\t')
//			++nwhite;
//		else
//			++nother;
//	}
//	printf("digits =");
//	for (i = 0; i < 10; ++i)
//		printf(" %d",ndigit[i]);
//	printf(", white space = %d,other = %d \n", nwhite, nother);
//	return 0;
//}
////��ϰ1-12
//#define IN  1 //inside a word
//#define OUT 0 // outside a word
//
//main()
//{
//	int c, state;
//
//	state = OUT;
//	while ((c = getchar()) != EOF)
//	{
//		if (c == ' ' || c == '\n' || c == '\t')
//		{
//			if (state == IN) {
//				putchar('\n');   //beginning of word
//				state = OUT;
//			}
//		}
//		else if (state == OUT) {
//			state = IN;          //beginning of word
//			putchar(c);	
//		}
//		else                     // inside a word
//			putchar(c);
//	}
//	return 0;
//}


////�鱾1.5.4���ʼ���
//#define IN  1
//#define OUT 0
//
//main()
//{
//	int c, nl, nw, nc, state;
//	
//	state = OUT;
//	nl = nw = nc = 0;
//	while ((c = getchar()) != EOF)
//	{
//		++nc;
//		if (c == '\n')
//			++nl;
//		if (c == ' ' || c == '\n' || c == '\t')
//			state = OUT;
//		else if (state == OUT) {
//			state = IN;
//			++nw;
//		}
//
//	}
//	printf("������%d\n ��������%d\n �ַ�����%d\n", nl, nw, nc);
//	printf("û�����룬���������");
//	return 0;
//}
//main()
//{
//	int c;
//	while ((c = getchar()) != EOF)
//	{
//		if (c == '\t')
//			printf("\\t");
//		else if (c == '\b')
//			printf("\\b");
//		else if (c == '\\')
//			printf("\\\\");
//		else
//			putchar(c);
//	}
//	return 0;
//}


//#define NONBLANK  'a'

//main()
//{
//	int c, lastc;
//
//	lastc = NONBLANK;
//	while ((c = getchar()) != EOF)
//	{
//		if(c != ' ' || lastc != ' ')
//			putchar(c);
//			lastc = c;
//		//if (c != ' ')
//		//	putchar(c);
//		//else if (lastc != ' ')
//		//	putchar(c);
//		//lastc = c;
//	}
//	return 0;
//}
//��ϰ1-8 ��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ���
//main()
//{
//	int c, n1,n2,n3;
//	n1 = 0;
//	n2 = 0;
//	n3 = 0;
//	while ((c = getchar()) != EOF)
//		if (c == '\n')
//		{
//			++n1;
//		}	else if (c == ' ')
//		{
//			++n2;
//		}	else if (c == '\t')
//		{
//			++n3;
//		}
//			
//		printf("���з�\\n�ĸ���Ϊ��%d\n",n1);
//		printf("�ո���ĸ���Ϊ��%d\n",n2);
//		printf("�Ʊ���ĸ���Ϊ:%d\n",n3);
//	return 0;
//}
//main()
//{
//	int c, n1;
//	n1 = 0;
//	while ((c = getchar()) != EOF)
//		if (c == '\n')
//			++n1;
//	printf("%d\n",n1);
//	return 0;
//}
//main()
//{
//	double nc;
//
//	for (nc = 0; getchar() != EOF; ++nc)
//		;
//	printf("%.0f\n",nc);
//	return 0;
//}
//main()
//{
//	int c;
//	while (c = getchar() != EOF)
//		printf("%d\n", c);
//	printf("%d - at EOF\n",c);
//	return 0;
//}
//main()
//{
//	printf("EOF is %d\n", EOF);
//	return 0;
//}
//main()
//{
//	int c;
//
//	while ((c = getchar()) != EOF)
//		putchar(c);
//	return 0;
//}
//main()
//{
//	int c;
//
//	c = getchar();
//	while (c != EOF) {
//		putchar(c);
//		c = getchar();
//	
//	}
//}









//#include <stdio.h>
//
//#define LOWER 0 //�������
//#define UPPER 300 //�������
//#define STEP  20 //����
//
//main()
//{
//	int fahr;
//
//	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//	
//		printf("%3d %6.1f\n",fahr,(5.0 / 9.0)*(fahr - 32));
//	
//	return 0;
//}