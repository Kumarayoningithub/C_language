int main()
{
    // {int x=65;
    // printf("%d ", x);
    // char ch = (char)x;
    // printf("%c ", ch);
    char ch;
    for (int i = 65; i <= 90; i++)
    {

        char ch = (char)i;
        printf("%c->", ch);
        printf("%d\n", i);
    }

    return 0;
}