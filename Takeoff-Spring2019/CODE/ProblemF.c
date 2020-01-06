#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* substr(const char *src, int m, int n)
{
	// get length of the destination string
	int len = n - m;

	// allocate (len + 1) chars for destination (+1 for extra null character)
	char *dest = (char*)malloc(sizeof(char) * (len + 1));

	// extracts characters between m'th and n'th index from source string
	// and copy them into the destination string
	for (int i = m; i < n && (*src != '\0'); i++)
	{
		*dest = *(src + i);
		dest++;
	}

	// null-terminate the destination string
	*dest = '\0';

	// return the destination string
	return dest - len;
}
int main()
{

    //freopen("fin.txt", "r", stdin);
    //freopen("fout.txt", "w", stdout);
    int n;
    scanf("%d",&n);
    char str[100];
    for(int i=1;i<=n;i++)
    {
        scanf("%s",str);
        int l = strlen(str);
        char first[100];
        char last[100];
        strcpy(first,substr(str,0,l/2));
        strcpy(last,substr(str,(l/2),l));
        if(strcmp(strlwr(first),strlwr(last))==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
