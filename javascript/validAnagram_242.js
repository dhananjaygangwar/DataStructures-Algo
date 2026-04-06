const isAnagram = (t,s) => {
    if(s.length !== t.length){
        return false;
    }
    let sSort = s.split('').sort().join();
    let tSort = t.split('').sort().join();
    return sSort == tSort;
};

const s = "anagram"
const t = "nagaram"

console.log(isAnagram(t,s));