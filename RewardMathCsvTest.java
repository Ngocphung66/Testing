import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvFileSource;
import static org.junit.jupiter.api.Assertions.*;

public class RewardMathCsvTest {
    @Test
    @ParameterizedTest
    @CsvFileSource(resources = "/Data.csv", numLinesToSkip = 1)
    void test(double x, int y, boolean result){
        assertEquals(RewardMath.checkKT(x, y),result);
    }

}