#include"3-calc.h"

int main(int argc, char* argv[])
{
    int num1, num2;
    int res;
    int (*p)(int, int);
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    if (!(is_equal("+", argv[2]) || is_equal("-", argv[2]) || is_equal("*", argv[2]) || is_equal("/", argv[2]) || is_equal("%", argv[2])))
    {
        printf("Error\n");
        exit(99);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    p = get_op_func(argv[2]);
    res = (*p)(num1, num2);
    printf("%d\n", res);
    return 0;
}
