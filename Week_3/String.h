#ifndef STRING_H
#define STRING_H 

class String
{
public:


	int Length() { return n_; }
	void Print() { std::cout << s_; }

	String(const char* str = "");
	~String();

	String(const String&);
	String& operator =(const String&);
	String& operator +=(const String&);
	friend bool operator ==(const String& lhs, const String& rhs);
	friend bool operator >(const String& lhs, const String& rhs);
	char &operator [](int i);
	const char &operator [](int i) const; // возвращаемое константа и 
	friend std::ostream & operator <<(std::ostream &, const String &);
private:
	size_t n_; //длина строки (без учета завершающего „\0?) 
	char* s_; //адрес буфера для строки в динамической памяти 
	//память выделяется в конструкторе 
	//ее следует освободить в деструкторе 
	//также для класса следует переопределить  
	//конструктор копирования и оператор присваивания 
};


String operator +(const String& lhs, const String& rhs);
bool operator !=(const String& lhs, const String& rhs);
bool operator <(const String& lhs, const String& rhs);
bool operator >=(const String& lhs, const String& rhs);
bool operator <=(const String& lhs, const String& rhs);
std::istream & operator >>(std::istream &, String &);
#endif 
