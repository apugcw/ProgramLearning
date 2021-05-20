# バージョン管理システム(Git)について

## 初めに
プログラミング1で利用したバージョン管理システム(Subversion)を利用した事がある人には馴染みがあるかと思います．  

## Gitインストール
1. [Git公式サイト](https://git-scm.com/downloads)からダウンロードします．
2. インストーラーに従ってインストールを完了してください．  
    注意：インストール途中にエディタ選択画面でVScodeを選択してください．
3. GitがインストールされたかPowershellで`git`と入力し実行してみてください．
4. Githubのアカウント登録を行う．  
   [github公式サイト](https://github.com/)の**Sign up**から登録してください．  
   ここで登録したユーザー名をGitの'username'に入れてください．
5. Gitの初期設定を行う．  
   * 設定する項目としてはユーザー名とメールアドレス
   * エディタ，マージの設定
   * pushの設定
   * 注意：メールアドレスはgithub上の設定>Emails>Primary email address内の  
  00000+XXX.@users.noreply.github.com と書いているアドレスをコピペしましょう．
    ```
    git config --global user.name 'username'
    git config --global user.email 'username@example.com'
    git config --global core.editor 'code --wait'
    git config --global merge.tool 'code --wait "$MERGED"'
    git config --global push.default simple
    ```
5. Git for Windows では改行コードが問題になることがあるので詳しくし知りたい方は[Qiita](https://qiita.com/uggds/items/00a1974ec4f115616580)を御覧ください．  
    とりあえず設定できればいい方は以下のコマンドを実行してみてください．  
    ```
    git config --global core.autocrlf input
    ```
