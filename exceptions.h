#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_

#include <exception>
#include <stdexcept>
#include <string>

// This exception is thrown when a string doesn't contain only hiragana
class InvalidHiraganaException : public std::exception {
public:
	InvalidHiraganaException(std::string message) { message_ = message; }
	~InvalidHiraganaException() throw () {}
	std::string getMessage() const { return message_; }
private:
	std::string message_;
};

// This exception is thrown when a string doesn't contain only katakana
class InvalidKatakanaException : public std::exception {
public:
	InvalidKatakanaException(std::string message) { message_ = message; }
	~InvalidKatakanaException() throw () {}
	std::string getMessage() const { return message_; }
private:
	std::string message_;
};
#endif