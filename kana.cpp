#include "kana.h"
#include "exceptions.h"

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

const std::unordered_map<wchar_t, wchar_t> Kana::hiraKata{
	{L'あ', L'ア'},
	{L'い', L'イ'},
	{L'う', L'ウ'},
	{L'え', L'エ'},
	{L'お', L'オ'},
	{L'か', L'カ'},
	{L'き', L'キ'},
	{L'く', L'ケ'},
	{L'こ', L'コ'},
	{L'さ', L'サ'},
	{L'し', L'シ'},
	{L'す', L'ス'},
	{L'せ', L'セ'},
	{L'そ', L'ソ'},
	{L'た', L'タ'},
	{L'ち', L'チ'},
	{L'つ', L'ツ'},
	{L'て', L'テ'},
	{L'と', L'ト'},
	{L'な', L'ナ'},
	{L'に', L'ニ'},
	{L'ぬ', L'ヌ'},
	{L'ね', L'ネ'},
	{L'の', L'ノ'},
	{L'は', L'ハ'},
	{L'ひ', L'ヒ'},
	{L'ふ', L'フ'},
	{L'へ', L'ヘ'},
	{L'ほ', L'ホ'},
	{L'ま', L'マ'},
	{L'み', L'ミ'},
	{L'む', L'ム'},
	{L'め', L'メ'},
	{L'も', L'モ'},
	{L'や', L'ヤ'},
	{L'ゆ', L'ユ'},
	{L'よ', L'ヨ'},
	{L'ら', L'ラ'},
	{L'り', L'リ'},
	{L'る', L'ル'},
	{L'れ', L'レ'},
	{L'ろ', L'ロ'},
	{L'わ', L'ワ'},
	{L'を', L'ヲ'},
	{L'ん', L'ン'},
	{L'が', L'ガ'},
	{L'ぎ', L'ギ'},
	{L'ぐ', L'グ'},
	{L'げ', L'ゲ'},
	{L'ご', L'ゴ'},
	{L'ざ', L'ザ'},
	{L'じ', L'ジ'},
	{L'ず', L'ズ'},
	{L'ぜ', L'ゼ'},
	{L'ぞ', L'ゾ'},
	{L'だ', L'ダ'},
	{L'ぢ', L'ヂ'},
	{L'づ', L'ヅ'},
	{L'で', L'デ'},
	{L'ど', L'ド'},
	{L'ば', L'バ'},
	{L'び', L'ビ'},
	{L'ぶ', L'ブ'},
	{L'べ', L'ベ'},
	{L'ぼ', L'ボ'},
	{L'ぱ', L'パ'},
	{L'ぴ', L'ピ'},
	{L'ぷ', L'プ'},
	{L'ぺ', L'ペ'},
	{L'ぽ', L'ポ'},
	{L'ゃ', L'ャ'},
	{L'ゅ', L'ュ'},
	{L'ょ', L'ョ'},
	{L'っ', L'ッ'}
};
const std::unordered_map<wchar_t, wchar_t> Kana::kataHira{
	{L'ア', L'あ'},
	{L'イ', L'い'},
	{L'ウ', L'う'},
	{L'エ', L'え'},
	{L'オ', L'お'},
	{L'カ', L'か'},
	{L'キ', L'き'},
	{L'ケ', L'く'},
	{L'コ', L'こ'},
	{L'サ', L'さ'},
	{L'シ', L'し'},
	{L'ス', L'す'},
	{L'セ', L'せ'},
	{L'ソ', L'そ'},
	{L'タ', L'た'},
	{L'チ', L'ち'},
	{L'ツ', L'つ'},
	{L'テ', L'て'},
	{L'ト', L'と'},
	{L'ナ', L'な'},
	{L'ニ', L'に'},
	{L'ヌ', L'ぬ'},
	{L'ネ', L'ね'},
	{L'ノ', L'の'},
	{L'ハ', L'は'},
	{L'ヒ', L'ひ'},
	{L'フ', L'ふ'},
	{L'ヘ', L'へ'},
	{L'ホ', L'ほ'},
	{L'マ', L'ま'},
	{L'ミ', L'み'},
	{L'ム', L'む'},
	{L'メ', L'め'},
	{L'モ', L'も'},
	{L'ヤ', L'や'},
	{L'ユ', L'ゆ'},
	{L'ヨ', L'よ'},
	{L'ラ', L'ら'},
	{L'リ', L'り'},
	{L'ル', L'る'},
	{L'レ', L'れ'},
	{L'ロ', L'ろ'},
	{L'ワ', L'わ'},
	{L'ヲ', L'を'},
	{L'ン', L'ん'},
	{L'ガ', L'が'},
	{L'ギ', L'ぎ'},
	{L'グ', L'ぐ'},
	{L'ゲ', L'げ'},
	{L'ゴ', L'ご'},
	{L'ザ', L'ざ'},
	{L'ジ', L'じ'},
	{L'ズ', L'ず'},
	{L'ゼ', L'ぜ'},
	{L'ゾ', L'ぞ'},
	{L'ダ', L'だ'},
	{L'ヂ', L'ぢ'},
	{L'ヅ', L'づ'},
	{L'デ', L'で'},
	{L'ド', L'ど'},
	{L'バ', L'ば'},
	{L'ビ', L'び'},
	{L'ブ', L'ぶ'},
	{L'ベ', L'べ'},
	{L'ボ', L'ぼ'},
	{L'パ', L'ぱ'},
	{L'ピ', L'ぴ'},
	{L'プ', L'ぷ'},
	{L'ペ', L'ぺ'},
	{L'ポ', L'ぽ'},
	{L'ャ', L'ゃ'},
	{L'ュ', L'ゅ'},
	{L'ョ', L'ょ'},
	{L'ッ', L'っ'}
};

std::string Kana::romanize(std::wstring kana) {
	return std::string();
}

std::wstring Kana::hiraToKata(std::wstring hiragana) {
	std::wstring temp;
	for (size_t i = 0; i < hiragana.size(); i++) {
		std::unordered_map<wchar_t, wchar_t>::const_iterator item = hiraKata.find(hiragana[i]);
		if (item == hiraKata.end()) throw InvalidHiraganaException("Character is not hiragana!");
		temp += item->second;
	}
	return temp;
}

std::wstring Kana::kataToHiri(std::wstring katakana) {
	std::wstring temp;
	for (size_t i = 0; i < katakana.size(); i++) {
		std::unordered_map<wchar_t, wchar_t>::const_iterator item = kataHira.find(katakana[i]);
		if (item == kataHira.end()) throw InvalidKatakanaException("Character is not hiragana!");
		temp += item->second;
	}
	return temp;
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
