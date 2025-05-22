//what will be the value of a and b on each line?
/*
a = 10, b = 5;
a = ++a + ++a;
b = a-- - --b;
*/

int main(){
    int a, b;
    a = 10;
    b = 5;
    a = ++a + ++a;
    printf("a: %d\n", a);
    b = a-- - --b;
    printf("b: %d\n", b);
    return 0;
}