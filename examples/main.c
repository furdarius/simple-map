#include <stdio.h>

#include "../map.h"

int
main(){
    map_t *m = map_new(100);
    printf("here 1\n");
    map_set(m, "animals", "[\"dog\", \"cat\", \"horse\"]"); 
    printf("here 2\n");
    map_set(m, "integer", (int *)100); 
    map_set(m, "long_long", (long long *)100);
    printf("asdf\n");
    char *b = (char *)map_get(m, "animals");
    printf("%s\n", b);

    int j = (int)map_get(m, "integer");
    printf("%d\n", j);

    long long a = (long long)map_get(m, "long_long");
    printf("%lld\n", a);

    map_del(m, "integer");

    j = (int)map_get(m, "integer");
    if (j) {
        printf("%d\n", j);
    } else {
        printf("map: key not found\n");
    }

    printf("cap: %d\n", m->cap);
    printf("len: %d\n", m->len);

    map_free(m);

    return 0;
}
