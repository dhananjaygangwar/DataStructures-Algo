//sorting way (29ms)
// const isAnagram = (t,s) => {
//     if(s.length !== t.length){
//         return false;
//     }
//     let sSort = s.split('').sort().join();
//     let tSort = t.split('').sort().join();
//     return sSort == tSort;
// };

// Hash map()
const isAnagram = (t,s) => {
    if (s.length !== t.length){
        return false;
    }

    const countS = {};
    const countT = {};
    for (let i = 0; i < s.length; i++) {
        countS[s[i]] = (countS[s[i]] || 0) + 1;
        countT[t[i]] = (countT[t[i]] || 0) + 1;        
    }
    for(const key in countS){
        if (countS[key] !== countT[key]){
            return false;
        }
    }
    return true;    
}

const s = "anagram"
const t = "nagaram"

console.log(isAnagram(t,s));