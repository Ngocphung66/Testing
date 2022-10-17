package org.example;
import java.util.Scanner;

public class Testing {
    public static void checkKT(double gpa, int đrl) {
        if ((gpa < 0) || (gpa > 4.0)) {
            System.out.println("GPA đầu vào không hợp lệ");
        } else {
            if ((đrl < 0) || (đrl > 100)) {
            System.out.println("Điểm rèn luyện đầu vào không hợp lệ");
            } else {
                if (gpa >= 3.6) {
                    if (đrl >= 90) {
                       System.out.println("Khen thưởng sinh viên xuất sắc");
                    } else if ((đrl >= 80) && (đrl < 90)) {
                        System.out.println("Khen thưởng sinh viên giỏi");
                    } else if ((đrl >= 70) && (đrl < 80)) {
                        System.out.println("Khen thưởng sinh viên khá");
                    } else System.out.println("Không đủ điều kiện khen thưởng");
                } else System.out.println("Không đủ điều kiện khen thưởng");
            }
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Nhập vào điểm gpa của bạn: ");
        double a = input.nextDouble();
        System.out.println("Nhập vào điểm rèn luyện của bạn: ");
        int b = input.nextInt();
        checkKT(a, b);
    }
}

