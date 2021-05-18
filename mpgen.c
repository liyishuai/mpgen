#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char pick(const char *s) {
    return s[rand() % strlen(s)];
}

int main(int argc, char *argv[]) {
    srand(time(NULL));
    if (argc > 1 && *argv[1] == 'm') {
        const char *lower = "abcdefghijklmnopqrstuvwxyz";

        const int namel = rand() % 11 + 1;
        char name[namel];
        for (int i = 0; i < namel; ++i)
            name[i] = pick(lower);
        name[namel] = 0;

        const int doml = rand() % 3 + 1;
        char domain[doml];
        for (int i = 0; i < doml; ++i)
            domain[i] = pick(lower);
        domain[doml] = 0;

        const int tldl = rand() % 2 + 2;
        char tld[tldl];
        for (int i = 0; i < tldl; ++i)
            tld[i] = pick(lower);
        tld[tldl] = 0;

        printf("%s@%s.%s\n", name, domain, tld);
    } else {
        const char *passc = "abcdefghijklmnopqrstuvwxyz"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "`1234567890-=~!@#$%^&*()_+";

        const int passl = rand() % 8 + 8;
        char pass[passl];
        for (int i = 0; i < passl; ++i)
            pass[i] = pick(passc);
        pass[passl] = 0;

        puts(pass);
    }
}
