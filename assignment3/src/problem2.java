class problem2 {

    public static void main(String[] args) {
        System.out.println("Problem 2");
        int lv = 1;
        for (int i = 0; i < 5; i++) {
            lv = i;
            System.out.println("x should print");
            System.out.println(lv);
        }
        System.out.println("Attempting to print x, program should crash now");
        System.out.println(lv);

    }

}