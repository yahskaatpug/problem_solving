// Algo to design a Phone book.

// - Where user should be able to save multiple phone no against one user
// - Searching should be faster
// - Ankit & Aman can have same number & both of them should come when searching via number
// - People should be able to search by name, number etc.
// - People can search using wild card or regex based searching for ex. it - shows Ankit, Amit, Ramit, Mitwa




function searchByName(key, contacts){

    let searchedContacts = [];
    for(let i=0;i<contacts.length;i++){
        const regex = new RegExp(key, 'i');

        if(contacts[i].name.match(regex)){
            searchedContacts.push({name: contacts[i].name, phone: contacts[i].phone});
        }
    }

    return searchedContacts;
}

function searchByNumber(key, contacts){

    const regex = new RegExp(key, 'i');

    let searchedContacts = [];
    contacts.map(contact =>{
        const matchingNumbers = contact.phone.filter(num => num.match(regex));
        if(matchingNumbers.length>0){
            searchedContacts.push({name: contact.name, phone: matchingNumbers})
        }
    })
    // for(let i=0;i<contacts.length;i++){
    //     const regex = new RegExp(key, 'i');
    //     const phoneNumberArray = contacts[i].phone;

    //     for(let ii=0;ii<phoneNumberArray.length;ii++){
    //         if(phoneNumberArray[ii].match(regex)){
    //             searchedContacts.push({name: contacts[i].name, phone: phoneNumberArray[ii]});
    //         }
    //     }
    // }

    return searchedContacts;
}


let contacts = [
    {
        id:'1',
        name:'Akshay Gupta',
        phone:['9407142196']
    },
    {
        id:'2',
        name:'Gaurav Jain',
        phone:['8234567893','6262387889']
    },
    {
        id:'3',
        name:'Shikhar Parikh',
        phone:['7234567912','6262387889']
    },
]

const searchKey = 'sh';
const isNum = /^\d+$/.test(searchKey);

let contactsArray;

if(isNum){
    contactsArray = searchByNumber(searchKey, contacts);
}
else{
    contactsArray = searchByName(searchKey, contacts);
}

 

if(contactsArray.length){
    console.log(contactsArray);
}
else{
    console.log("record not found");
}

