import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class RewardMathTest {
    @Test
    void test1() {
        assertEquals(RewardMath.checkKT(5.4, 100),false);
    }
    @Test
    void test2() {
        assertEquals(RewardMath.checkKT(3.2, 102), false);
    }@Test
    void test3() {
        assertEquals(RewardMath.checkKT(3.75, 92),true);
    }
    @Test
    void test4() {
        assertEquals(RewardMath.checkKT(3.8, 80),false);
    }
    @Test
    void test5() {
        assertEquals(RewardMath.checkKT(3.65, 74),false);
    }
    @Test
    void test6() {
        assertEquals(RewardMath.checkKT(3.68, 65),false);
    }
    @Test
    void test7() {
        assertEquals(RewardMath.checkKT(3.26, 89),false);
    }
}
