double addArray(double arrayDouble[], int size)
{
    double sum { 0 };
    // Can't use range based for loop with array because it is decayed
    for (int i = 0; i < size; ++i)
    {
        sum += arrayDouble[i];
    }
    return sum;
}