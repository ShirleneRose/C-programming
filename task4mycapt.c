int main()
{
    char name1[100], name2[100], i, j;
    printf("Enter first name: ");
    scanf("%s", name1);
    printf("Enter second name: ");
    scanf("%s", name2);
    for(i = 0; name1[i] != '\0'; ++i);
    for(j = 0; name2[j] != '\0'; ++j, ++i)
    {
        name1[i] = name2[j];
    }
    name1[i] = '\0';
    printf("After concatenation: %s", name1);
    return 0;
}
