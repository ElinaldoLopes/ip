#include <stdio.h>
int main() {
    int ma, me, m, n;
    for (int i=0; i<3; i++) {
        scanf("%d", &n);
        if (i == 0){
            ma = me = m = n;
        }
        else {
            if(ma<n) {
                ma = n;
            }
            if(me>n) {
                me = n;
            }
            if (me < n && ma >n) {
                m = n;
            }
        }
    }
    printf("%d %d %d", me, m, ma);
    return 0;
}
