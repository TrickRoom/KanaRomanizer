#ifndef KANA_H_
#define KANA_H_

#include <string>
#include <unordered_map>

class Kana {
public:
	// Romanizes string of kana
	static std::string romanize(std::wstring kana);

	// Converts string of hiragana to katakana
	// Throws InvalidHiraganaException
	static std::wstring hiraToKata(std::wstring hirigana);

	// Converts string of katakana to hiragana
	// Throws InvalidKatakanaException
	static std::wstring kataToHiri(std::wstring katakana);

protected:
	class Hiragana {
	public:
		// Return true if character is a hiragana character
		static bool isHiragana(wchar_t character);

		// Returns true if string contains at least one hiragana character
		static bool containsHiragana(std::wstring text);

		// Maps of kana types
		static const std::unordered_map<wchar_t, std::string> normal;
		static const std::unordered_map<wchar_t, std::string> tiny;
		static const std::unordered_map<wchar_t, std::string> dakuten;
		static const std::unordered_map<wchar_t, std::string> handakuten;
	};
	class Katakana {
	public:
		// Return true if character is a katakana character
		static bool isKatakana(wchar_t character);

		// Returns true if string contains at least one katakana character
		static bool containsKatakana(std::wstring text);

		// Maps of kana types
		static const std::unordered_map<wchar_t, std::string> normal;
		static const std::unordered_map<wchar_t, std::string> tiny;
		static const std::unordered_map<wchar_t, std::string> dakuten;
		static const std::unordered_map<wchar_t, std::string> handakuten;
	};

	static const std::unordered_map<wchar_t, wchar_t> hiraKata;
	static const std::unordered_map<wchar_t, wchar_t> kataHira;
};
#endif