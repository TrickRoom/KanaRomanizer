#include "kana.h"

// Initialize maps of kana
const std::unordered_map<wchar_t, std::string> Kana::Hiragana::normal{
	{L'あ', "a"},
	{L'い', "i"},
	{L'う', "u"},
	{L'え', "e"},
	{L'お', "o"},
	{L'か', "ka"},
	{L'き', "ki"},
	{L'く', "ku"},
	{L'こ', "ko"},
	{L'さ', "sa"},
	{L'し', "shi"},
	{L'す', "su"},
	{L'せ', "se"},
	{L'そ', "so"},
	{L'た', "ta"},
	{L'ち', "chi"},
	{L'つ', "tsu"},
	{L'て', "te"},
	{L'と', "to"},
	{L'な', "na"},
	{L'に', "ni"},
	{L'ぬ', "nu"},
	{L'ね', "ne"},
	{L'の', "no"},
	{L'は', "ha"},
	{L'ひ', "hi"},
	{L'ふ', "fu"},
	{L'へ', "he"},
	{L'ほ', "ho"},
	{L'ま', "ma"},
	{L'み', "mi"},
	{L'む', "mu"},
	{L'め', "me"},
	{L'も', "mo"},
	{L'や', "ya"},
	{L'ゆ', "yu"},
	{L'よ', "yo"},
	{L'ら', "ra"},
	{L'り', "ri"},
	{L'る', "ru"},
	{L'れ', "re"},
	{L'ろ', "ro"},
	{L'わ', "wa"},
	{L'を', "wo"},
	{L'ん', "n"}
};
const std::unordered_map<wchar_t, std::string> Kana::Hiragana::dakuten{
	{L'が', "ga"},
	{L'ぎ', "gi"},
	{L'ぐ', "gu"},
	{L'げ', "ge"},
	{L'ご', "go"},
	{L'ざ', "za"},
	{L'じ', "ji"},
	{L'ず', "zu"},
	{L'ぜ', "ze"},
	{L'ぞ', "zo"},
	{L'だ', "da"},
	{L'ぢ', "ji"},
	{L'づ', "zu"},
	{L'で', "de"},
	{L'ど', "do"},
	{L'ば', "ba"},
	{L'び', "bi"},
	{L'ぶ', "bu"},
	{L'べ', "be"},
	{L'ぼ', "bo"}
};
const std::unordered_map<wchar_t, std::string> Kana::Hiragana::handakuten{
	{L'ぱ', "pa"},
	{L'ぴ', "pi"},
	{L'ぷ', "pu"},
	{L'ぺ', "pe"},
	{L'ぽ', "po"}
};
const std::unordered_map<wchar_t, std::string> Kana::Hiragana::tiny{
	{L'ゃ', "tinyYa"},
	{L'ゅ', "tinyYu"},
	{L'ょ', "tinyYo"},
	{L'っ', "tinyTsu"}
};

const std::unordered_map<wchar_t, std::string> Kana::Katakana::normal{
	{L'ア', "a"},
	{L'イ', "i"},
	{L'ウ', "u"},
	{L'エ', "e"},
	{L'オ', "o"},
	{L'カ', "ka"},
	{L'キ', "ki"},
	{L'ケ', "ku"},
	{L'コ', "ko"},
	{L'サ', "sa"},
	{L'シ', "shi"},
	{L'ス', "su"},
	{L'セ', "se"},
	{L'ソ', "so"},
	{L'タ', "ta"},
	{L'チ', "chi"},
	{L'ツ', "tsu"},
	{L'テ', "te"},
	{L'ト', "to"},
	{L'ナ', "na"},
	{L'ニ', "ni"},
	{L'ヌ', "nu"},
	{L'ネ', "ne"},
	{L'ノ', "no"},
	{L'ハ', "ha"},
	{L'ヒ', "hi"},
	{L'フ', "fu"},
	{L'ヘ', "he"},
	{L'ホ', "ho"},
	{L'マ', "ma"},
	{L'ミ', "mi"},
	{L'ム', "mu"},
	{L'メ', "me"},
	{L'モ', "mo"},
	{L'ヤ', "ya"},
	{L'ユ', "yu"},
	{L'ヨ', "yo"},
	{L'ラ', "ra"},
	{L'リ', "ri"},
	{L'ル', "ru"},
	{L'レ', "re"},
	{L'ロ', "ro"},
	{L'ワ', "wa"},
	{L'ヲ', "wo"},
	{L'ン', "n"}
};
const std::unordered_map<wchar_t, std::string> Kana::Katakana::dakuten{
	{L'ガ', "ga"},
	{L'ギ', "gi"},
	{L'グ', "gu"},
	{L'ゲ', "ge"},
	{L'ゴ', "go"},
	{L'ザ', "za"},
	{L'ジ', "ji"},
	{L'ズ', "zu"},
	{L'ゼ', "ze"},
	{L'ゾ', "zo"},
	{L'ダ', "da"},
	{L'ヂ', "ji"},
	{L'ヅ', "zu"},
	{L'デ', "de"},
	{L'ド', "do"},
	{L'バ', "ba"},
	{L'ビ', "bi"},
	{L'ブ', "bu"},
	{L'ベ', "be"},
	{L'ボ', "bo"}
};
const std::unordered_map<wchar_t, std::string> Kana::Katakana::handakuten{
	{L'パ', "pa"},
	{L'ピ', "pi"},
	{L'プ', "pu"},
	{L'ペ', "pe"},
	{L'ポ', "po"}
};
const std::unordered_map<wchar_t, std::string> Kana::Katakana::tiny{
	{L'ャ', "tinyYa"},
	{L'ュ', "tinyYu"},
	{L'ョ', "tinyYo"},
	{L'ッ', "tinyTsu"},
};

std::string Kana::romanize(std::wstring kana) {
	return std::string();
}

std::string Kana::hiraToKata(std::wstring hiragana) {
	return std::string();
}

std::string Kana::kataToHiri(std::wstring katakana) {
	return std::string();
}


bool Kana::Hiragana::isHiragana(wchar_t character) {
	if (normal.find(character) != normal.end() || tiny.find(character) != tiny.end() || dakuten.find(character) != dakuten.end() || handakuten.find(character) != handakuten.end()) {
		return true; 
	}
	return false;
}

bool Kana::Hiragana::containsHiragana(std::wstring text) {
	for (size_t i = 0; i < text.size(); i++) {
		if (isHiragana(text[i])) return true;
	}
	return false;
}

bool Kana::Katakana::isKatakana(wchar_t character) {
	if (normal.find(character) != normal.end() || tiny.find(character) != tiny.end() || dakuten.find(character) != dakuten.end() || handakuten.find(character) != handakuten.end()) {
		return true;
	}
	return false;
}

bool Kana::Katakana::containsKatakana(std::wstring text) {
	for (size_t i = 0; i < text.size(); i++) {
		if (isKatakana(text[i])) return true;
	}
	return false;
}
