class problem4 {

    public static void main(String[] args) {

        // test conversion from int to double
        System.out.println("Going from int to double, we should not lose any information on the number");
        int convert = 1;
        double x = testIntToDouble(convert);
        System.out.println(x);
    }

    public static double testIntToDouble(int input)
    {
        double retVal;
        retVal = input;

        System.out.println("number passed into testIntToDouble was "
            + Integer.toString(input) + "\nConverting to double and returning.");
        return retVal;
    }
}