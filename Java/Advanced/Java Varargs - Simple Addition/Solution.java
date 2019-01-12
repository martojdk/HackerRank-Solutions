

class Add{
    public void add(int... a) {
        int sum = 0;
        String separator = "";
        for (int i : a) {
            sum += i;
            System.out.print(separator + i);
            separator = "+";
        }
        System.out.println("=" + sum);
    }
}

