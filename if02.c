#include <stdio.h>

int main()
{
        int var1;
        int var2;

        printf("2‚Â‚Ì”‚ğ”äŠr‚µ‚Ü‚·\nÅ‰‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
        scanf("%d",&var1);
        printf("”äŠr‚·‚é”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
        scanf("%d",&var2);

        if (var1 < var2) printf("%d ‚Í %d ‚æ‚è¬‚³‚¢‚Å‚·",var1,var2);
        if (var1 > var2) printf("%d ‚Í %d ‚æ‚è‘å‚«‚¢‚Å‚·",var1,var2);
        if (var1 == var2) printf("%d ‚Æ %d ‚Í“™‚µ‚¢‚Å‚·",var1,var2);

        return 0;
}