class problem4 {

    public static void main(String[] args) {

        // test conversion from int to double
        System.out.println("-Going from int to double, we should not lose any information on the number");
        int convert = 1;
        double x = testIntToDouble(convert);
        System.out.println(x);

        double d = 32.23;
        System.out.println("-Going from double to int, decimal should be truncated\nDouble: " + d);
        convert = (int) d;
        System.out.println("Int: " + convert);

        
        convert = 1000;
        byte b = (byte) convert;
        System.out.print("-Int to byte\n" + "Int " + convert + "\nByte ");
        System.out.println(b);

        System.out.println("\n-Type inference, evaluating 1.3 - 33 * -4, and looking at the output type");
        Object o = (1.3 - 33 * -4);
        System.out.println(o instanceof Integer);
        System.out.println(o instanceof Double);
        System.out.println(o);
    }

    public static double testIntToDouble(int input) {
        double retVal;
        retVal = (double) input;

        System.out.println("number passed into testIntToDouble was " + Integer.toString(input)
                + "\nConverting to double and returning.");
        return retVal;
    }
}