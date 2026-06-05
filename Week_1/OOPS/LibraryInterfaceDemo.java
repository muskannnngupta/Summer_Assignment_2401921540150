package Week_1.OOPS;

public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        KidUser kid = new KidUser(10, "Kids");
        kid.registerAccount();
        kid.requestBook();

        KidUser kid2 = new KidUser(18, "Fiction");
        kid2.registerAccount();
        kid2.requestBook();

        AdultUser adult2 = new AdultUser(5, "Kids");
        adult2.registerAccount();
        adult2.requestBook();

        AdultUser adult = new AdultUser(23, "Fiction");
        adult.registerAccount();
        adult.requestBook();
    }
}