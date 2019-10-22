class problem7{

    public static void main(String []args)
    {
        int a = 3, b = 5;
        int x = 10, y = 22;

        int result1 = x * y * sub(a, b);
        // 10 * 22 * sub(3, 5)
        // 10 * 22 * -2
        // 220 * -2 = -440
        int result2 = x * y * a - b;
        // 10 * 22 * 3 - 5
        // 220 * 3 - 5
        // = 655 
        System.out.println(Integer.toString(result1) + "\n" + Integer.toString(result2));
    }
    public static int sub(int a, int b)
    {
        return a - b;
    }
}