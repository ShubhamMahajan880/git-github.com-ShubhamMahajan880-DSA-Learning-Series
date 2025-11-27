int CountSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        int lastDig = num & 1;
        count += lastDig;
        num = num >> 1;
    }
    cout << count << endl;
    return count;
}
int main()
{
    CountSetBits(10); // 2 - in BNS 10 is 001010, so its count is 0+0+1+0+1+0 = 2
}