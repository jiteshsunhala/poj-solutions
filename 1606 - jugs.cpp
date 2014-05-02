#include<cstdio>
#include<cstdlib>
#define LLU int
using namespace std;

LLU mygcd(LLU a, LLU b){
	if (b==0)
		return a;
	else
		return mygcd(b,a%b);
}

int max(LLU x, LLU y){
	if(x > y)
		return x;
	return y;
}

int display(char c1, char c2, int x, int y, int z){
	int cap, a = x, b = 0, cnt = 1;
//	printf("Step %d: %d %d\n", cnt, a, b);
	printf("fill %c\n", c1);
//	system("pause");
	while(1){
		if(a == z || b==z)
			break;
		if(b + a > y){
			cap = y - b;
			a -= cap;
			b = y;
			cnt++;
//			printf("Step %d: %d %d\n", cnt, a, b);
			printf("pour %c %c\n", c1, c2);
//			system("pause");
			if(a == z || b ==z)
				return cnt;
			else{
				b = 0;
				cnt++;
//				printf("Step %d: %d %d\n", cnt, a, b);
				printf("empty %c\n", c2);
//				system("pause");
				if(a == z || b == z)
					return cnt;
			}
		}
		else if(b + a < y){
			cnt ++;
			b += a;
			a = 0;
//			printf("Step %d: %d %d\n", cnt, a, b);
			printf("pour %c %c\n", c1, c2);
//			system("pause");
			if(a == z || b == z)
				return cnt;
			a = x;
			cnt++;
//			printf("Step %d: %d %d\n", cnt, a, b);
			printf("fill %c\n", c1);
//			system("pause");
			if(a == z || b == z)
				return cnt;
		}
		else{
			b += a;
			a = 0;
			cnt++;
//			printf("Step %d: %d %d\n", cnt, a, b);
			printf("pour %c %c\n", c1, c2);
//			system("pause");
			if(a == z || b == z)
				return cnt;
			else{
				b = 0;
				cnt++;
//				printf("Step %d: %d %d\n", cnt, a, b);
				printf("empty %c\n", c2);
//				system("pause");
				if(a == z || b == z)
					return cnt;
				a = x;
				cnt++;
//				printf("Step %d: %d %d\n", cnt, a, b);
				printf("fill %c\n", c1);
//				system("pause");
				if(a == z || b == z)
					return cnt;
			}
		}
	}
	return cnt;
}

int ch_first(int x, int y, int z){
        int cap, a = x, b = 0, cnt = 1;
/*      printf("Step %d: %d %d\n", cnt, a, b);
        system("pause");*/
        while(1){
                if(a == z || b==z)
                        break;
                if(b + a > y){
                        cap = y - b;
                        a -= cap;
                        b = y;
                        cnt++;
/*                      printf("Step %d: %d %d\n", cnt, a, b);
                        system("pause");*/
                        if(a == z || b ==z)
                                return cnt;
                        else{
                                b = 0;
                                cnt++;
/*                              printf("Step %d: %d %d\n", cnt, a, b);
                                system("pause");*/
                                if(a == z || b == z)
                                        return cnt;
                        }
                }
                else if(b + a < y){
                        cnt ++;
                        b += a;
                        a = 0;
/*                      printf("Step %d: %d %d\n", cnt, a, b);
                        system("pause");*/
                        if(a == z || b == z)
                                return cnt;
                        a = x;
                        cnt++;
/*                      printf("Step %d: %d %d\n", cnt, a, b);
                        system("pause");*/
                        if(a == z || b == z)
                                return cnt;
                }
                else{
                        b += a;
                        a = 0;
                        cnt++;
/*                      printf("Step %d: %d %d\n", cnt, a, b);
                        system("pause");*/
                        if(a == z || b == z)
                                return cnt;
                        else{
                                b = 0;
                                cnt++;
/*                              printf("Step %d: %d %d\n", cnt, a, b);
                                system("pause");*/
                                if(a == z || b == z)
                                        return cnt;
                                a = x;
                                cnt++;
/*                              printf("Step %d: %d %d\n", cnt, a, b);
                                system("pause");*/
                                if(a == z || b == z)
                                        return cnt;
                        }
                }
        }
        return cnt;
}

int main(){
	LLU x, y, z, gcd, cnt1, cnt2;
	int t;
	while(scanf("%d%d%d", &x, &y, &z) != EOF){
		cnt1 = ch_first(x, y, z);
		cnt2 = ch_first(y, x, z);
		if(cnt1 < cnt2)
			display('A', 'B', x, y, z);
		else
			display('B', 'A', y, x, z);
		printf("success\n");
	}
//	system("pause");
    return 0;
}
