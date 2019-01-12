

static boolean isAnagram(String a, String b) {
        int[] countString1 = new int[26];
        int[] countString2 = new int[26];
        if(a.length() != b.length() ){
        return false;
        }
        for(int i=0;i<a.length();i++){
        char currChar = Character.toLowerCase(a.charAt(i));
        countString1[currChar-'a']++;
        currChar = Character.toLowerCase(b.charAt(i));
        countString2[currChar-'a']++;
        }
        for(int i=0;i<26;i++){
        if(countString1[i]!=countString2[i]){
        return false;
        }
        }
        return true;
        }

