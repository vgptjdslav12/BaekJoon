#include <stdio.h>
#include <string.h>
using namespace std;
int n, m;
int arr[105];
int brr[105];

int main(void) {
    int a;
    scanf("%d", &n);

    memset(arr, -1, sizeof(arr));

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a] = b;
    }

    int cnt = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int q;
        cnt = 0;
        scanf("%d", &q);
        for (int j = 0; j < q; j++) {
            scanf("%d", &brr[j]);
            if (brr[j] < 0 || brr[j]>100) {
                cnt++;
                continue;
            }

            if (arr[brr[j]] == -1) {
                cnt++;
            }
        }
        if (cnt != 0) {
            printf("YOU DIED\n");
        }
        else {
            for (int j = 0; j < q; j++) {
                printf("%d ", arr[brr[j]]);
            }
            printf("\n");
        }
    }
}
