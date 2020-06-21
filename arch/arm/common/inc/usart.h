#ifndef _USART_H_
#define _USART_H_


class Usart
{
 public:
	Usart();
	~Usart();

	void Write(const char* arr);
	void Read(char* arr, int max_len);
 private:
	hal_usart _usart;

};

#endif