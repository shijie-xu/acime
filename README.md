# Ancient Chinese Input Method
- Step 1: Construct the tree for constructions of all chinese character
- Step 2: Desgin algorithm based on the [Hidden Markov Model](https://github.com/THUzhangga/HMM_shurufa)


# 漢語拆字字典

## 說明

本倉庫含[開放詞典網](http://kaifangcidian.com/)用以提供[字旁和部件查詢](http://kaifangcidian.com/han/chaizi/)的拆字字典數據庫，有便利使用者查難打漢字等用途。目前數據庫收錄17,803不同漢字的拆法，分為繁體字（`chaizi-ft.txt`）和簡體字（`chaizi-jt.txt`）兩個版本。

拆字法有別於固有的筆順字庫。拆字著重於儘量把每個字拆成兩個以上的組成部件，而不是拆成手寫字時所使用的筆畫。


## 檔案說明

* `chaizi-ft.txt`：拆字字典（繁體版）
* `chaizi-jt.txt`：拆字字典（簡體版）
* `fanjian_suoyin.txt`：對照繁/簡體字的條目索引

## 範例

漢字 | 拆法 (一) | 拆法 (二) | 拆法 (三)
--- | -------- | -------- | --------
拆 | 手 斥 | 扌 斥 | 才 斥
字 | 宀 子
驠 | 馬 燕
鱧 | 魚 豊
馦 | 香 兼
覗 | 司 見
馫 | 香 香 香
靐 | 雷 雷 雷

拆字時以容易打出來的字為先，然後儘量列出其餘所有不同拆法，包括正確部首和部件（若包含於統一漢字表內）和異體字：

漢字 | 拆法 (一) | 拆法 (二) | 拆法 (三)
--- | -------- | -------- | --------
膂 | 旅 肉 | 旅 月
鋓 | 金 利 | 釒 利
迴 | 辵 回 | 辶 回
証 | 言 正 | 訁 正

目前一字最多可以有六（6）種拆法，例如：

漢字 | 拆法 (一) | 拆法 (二) | 拆法 (三) | 拆法 (四) | 拆法 (五) | 拆法 (六)
--- | -------- | -------- | -------- | -------- | -------- | --------
絕 | 絲 刀 巴 | 糹 刀 巴 | 糸 刀 巴 | 絲 色 | 糹 色 | 糸 色
拼 | 手 并 | 扌 并 | 才 并 | 手 幷 | 扌 幷 | 才 幷
鋶 | 金 亠 厶 川 | 釒 亠 厶 川 | 金 巟 | 釒 巟 | 金 㐬 | 釒 㐬


## 版權

© 2015 [開放詞典](http://www.kaifangcidian.com)

本表依照創作共用（創用CC/知識共享）姓名標示（署名）協議發佈。

<a rel="license" href="http://creativecommons.org/licenses/by/3.0/"><img alt="創用 CC 授權條款" style="border-width:0" src="https://i.creativecommons.org/l/by/3.0/88x31.png" /></a><br />本著作係採用<a rel="license" href="http://creativecommons.org/licenses/by/3.0/">創用 CC 姓名標示 3.0 未本地化 授權條款</a>授權.
