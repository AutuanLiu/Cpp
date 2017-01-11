#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
	{
		int n;
		int buf[10000];
		while (scanf("%d",&n)!=EOF) {
			for (int i = 0; i < n; i++) {
				scanf("%d\n",&buf[i] );
			}
			printf("\n");
		}
		return 0;
	}
