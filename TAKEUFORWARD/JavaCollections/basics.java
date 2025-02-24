
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.List;

class Data {
    private Integer num;
    private String name;

    Data(int _num, String _name) {
        this.num = _num;
        this.name = _name;
    }
}

public class basics {

    public static void main(String[] args) {
        // Data data = new Data(1, "John");
        // Collection<Data> data = new Collection<Data>();
        ArrayList<Integer> alist = new ArrayList<Integer>();
        alist.add(1);
        alist.add(2);
        alist.add(3);
        alist.add(1, 10);
        System.out.println(alist);

        System.out.println(alist);

    }
}