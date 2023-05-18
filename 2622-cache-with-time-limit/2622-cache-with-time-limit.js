
// var TimeLimitedCache = function() {
    
// };

// /** 
//  * @param {number} key
//  * @param {number} value
//  * @param {number} time until expiration in ms
//  * @return {boolean} if un-expired key already existed
//  */
// TimeLimitedCache.prototype.set = function(key, value, duration){
    
// };

// /** 
//  * @param {number} key
//  * @return {number} value associated with key
//  */
// TimeLimitedCache.prototype.get = function(key) {
    
// };

// /** 
//  * @return {number} count of non-expired keys
//  */
// TimeLimitedCache.prototype.count = function() {
    
// };

class TimeLimitedCache {
  constructor() {
    this.data = {};
    
  }

  set(key, value, duration) {
    const currentTime = Date.now();
    if (this.data[key] && this.data[key].expiration > currentTime) {
      this.data[key].value = value;
      this.data[key].expiration = currentTime + duration;
      return true;
    } else {
      this.data[key] = {
        value: value,
        expiration: currentTime + duration
      };
      return false;
    }
  }

  get(key) {
    const entry = this.data[key];
    if (entry && entry.expiration > Date.now()) {
      return entry.value;
    }
    return -1;
  }

  count() {
    const currentTime = Date.now();
    let count = 0;
    for (const key in this.data) {
      if (this.data[key].expiration > currentTime) {
        count++;
      }
    }
    return count;
  }
}


/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */