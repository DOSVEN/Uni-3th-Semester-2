/*
Project #01: Sound Signal Processing using C/C++ (In group)

- Dựa trên kiến thức học được về việc xử lý tín hiệu cùng với kỹ năng có được trong các môn học THCS2, Lập trình hướng đối tượng C++, ... 
hãy thực hiện thiết kế xây dựng các lớp biểu diễn đối tượng tín hiệu số, 
cùng các tham số và các phương thức (các phép toán) xử lý tín hiệu đơn giản đã học bằng ngôn ngữ lập trình C/C++
- Sử dụng phần thư viện (với các lớp) xây dựng được ở trên thực hiện xây dựng một ứng dụng đơn giản để thực hiện xử lý âm thanh 
(ví dụ: tạo hiệu ứng cho âm thanh, lọc âm thanh, trộn âm thanh, ...)

Yêu cầu:
- Bản cứng: file báo cáo và phụ lục phần mã nguồn chương trình
- Bản mềm:
1) Tài liệu báo cáo
- Slide trình chiếu, trình bày ngắn gọn rõ ràng quá trình thiết kế và thực hiện và kết quả đạt được
- File báo cáo trình bày rõ ràng các lớp được phân tích thiết kế, các tương tác giữa các lớp theo sơ đồ UML (nếu có)
2) Phần mã nguồn thư viện chương trình; trong các file mã nguồn có phần đầu tiên chú thích nhiều dòng với thông tin các thành viên của nhóm(họ và tên - tiếng Việt không dấu; mã sinh viên; nhóm lớp; số thứ tự trong nhóm lớp)

Chú ý 1: Báo cáo Project sẽ thực hiện trình diễn (demo) để đánh giá
- Trong phần demo cần có chương trình ứng dụng với ít nhất một thao tác xử lý âm thanh (Trình diễn trực tiếp - live)
Chú ý 2: Trong trường hợp gặp khó khăn với việc vào ra với file âm thanh thực (*.wav, *.mp3, ...) thì có thể sử dụng dữ liệu file âm thanh đã được dump ra data (*.dat) với sự trợ giúp của Octave
*/

#include <iostream>
#include <cstdio>
#include <cmath> //Used for the sin() function.
#include "LowPassFilter.hpp"
using namespace std;

class audio_device_io {
	public:


};

class sound_effects {
	public:
		string file_name ;
		string file_leng ;


		void WavReader (const char* fileName, const char* fileToSave){ // doc bieu do am thanh
		
		}	


		void WavMix  (const char* fileName, const char* fileToSave){ // 
		
		}	
	
};


int main(){
	//Create a low pass filter. DetltaTime for each cycle is unknown and will vary.
	LowPassFilter lpf;
	//Cycles 500 times. cycle time will be about 0.01 seconds so this code will simulate a 5 seconds of run time.
	for(int i = 0; i < 500; i++){
		float cycleTime = 0.01 + (0.002 * sin((float)i * 0.05));
		cout <<"cycleTime = " << cycleTime << ",\t Output = " << lpf.update(1.0, cycleTime, 2) << endl; 
	}
	return 1;
}