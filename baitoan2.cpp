/*
    Bài toán khen thưởng sinh viên.
    Tặng Danh hiệu “Sinh viên Xuất sắc” năm học cho sinh viên đạt kết
    quả học tập loại Xuất sắc, đồng thời kết quả rèn luyện toàn năm học đạt loại Xuất sắc.
    Tặng Danh hiệu “Sinh viên Giỏi” năm học cho sinh viên đạt kết quả học tập loại Giỏi trở lên 
    đồng thời kết quả rèn luyện toàn năm học 2020-2021 đạt loại Tốt trở lên.
    Tặng Danh hiệu “Sinh viên Khá” năm học cho sinh viên đạt kết quả học tập loại Khá trở lên 
    đồng thời kết quả rèn luyện toàn năm học 2020-2021 đạt loại Khá trở lên.
*/

#include<iostream>
using namespace std;

int main() {
    float gpa;
    int đrl;
    cout << "Nhập vào điểm gpa của bạn: ";
    cin >> gpa;
    cout << "Nhập vào điểm rèn luyện của bạn: ";
    cin >> đrl;
    if ((gpa < 0) || (gpa > 4.0))
    {
        cout << "GPA đầu vào không hợp lệ" << endl;
    }
    else
    {
        if ((đrl < 0) || (đrl > 100))
        {
            cout << "Điểm rèn luyện đầu vào không hợp lệ" << endl;
        }
        
        else 
        {
            if (gpa >= 3.6)
            {
                if (đrl >= 90)
                {
                    cout << "Khen thưởng sinh viên xuất sắc" << endl;
                }
                else if ((đrl >= 80) && (đrl < 90))
                {
                    cout << "Khen thưởng sinh viên giỏi" << endl;
                }
                else if ((đrl >= 70) && (đrl < 80))
                {
                    cout << "Khen thưởng sinh viên khá" << endl;
                }
                else cout << "Không đủ điều kiện khen thưởng" << endl;
                
            }

            else if ((gpa >= 3.2) && (gpa < 3.6))
            {
                if (đrl >= 80)
                {
                    cout << "Khen thưởng sinh viên giỏi" << endl;
                }
                else if ((đrl >= 70) && (đrl < 80))
                {
                    cout << "Khen thưởng sinh viên khá" << endl;
                }
                else cout << "Không đủ điều kiện khen thưởng" << endl;
            }

            else if ((gpa >= 2.5) && (gpa < 3.2))
            {
                if (đrl >= 70)
                {
                    cout << "Khen thưởng sinh viên khá" << endl;
                }
                else cout << "Không đủ điều kiện khen thưởng" << endl;
            }

            else cout << "Không đủ điều kiện khen thưởng" << endl;
        }
    }
    return 0;
    
    
}
