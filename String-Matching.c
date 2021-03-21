#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check( const char *pattern, const char *target)
{
	// check if target is at end or not
	if (*pattern == '\0'){
		return (*target == '\0');
	}
	// check for single character missing or match
	else if(*pattern == *target){
		return (*target!='\0' && check(pattern+1, target+1));
	}
	else if (*pattern == '?' ){
		return (*target!='\0' && check(pattern+1, target+1));
	}
	// check for multiple character missing
	else if (*pattern == '+'){
		if( *(pattern+1) == '+' ){
			return (*target!='\0' && check(pattern+1, target+1));
		}
		else{
			return (*target!='\0' && (check(pattern+1, target+1) || (*target!='\0' && check(pattern, target+1))));
		}
	}
	else if (*pattern == '*'){
		if( *(pattern+1) == '*' ){
			return (check(pattern+1, target));
		}
		else{
			return (check(pattern+1, target) || (*target!='\0' && check(pattern, target+1)));
		}
	}

	return false;
}

int main(void)
{
    int n;
	char pattern[70];
	char target[70];
	char *ptr;

    scanf("%s", target); getchar();
	ptr = target;
    scanf("%d", &n); getchar();
    for(int i = 0; i < n; i++ ){
		*pattern = '\0';
        scanf("%s", pattern); getchar();

        if (check(pattern, ptr)){
            puts(pattern);
		}
    }

	return 0;
}