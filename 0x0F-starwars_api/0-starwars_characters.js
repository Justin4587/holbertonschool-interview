#!/usr/bin/node
const request = require('request');
const myUrl = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2];
const stuff = [];

request(myUrl, async (error, response, body) => {
  const stuff = JSON.parse(body);
    toLog(stuff);
  });

async function toLog (stuff) {
  try {
    for (let i = 0; i < stuff.characters.length; i++) {
      const name = await nameFunc(stuff.characters[i]);
      console.log(JSON.parse(name).name);
    }} catch (E) {
      console.log(E);
    }
}

function nameFunc (thing) {
  return new Promise((resolve, reject) => {
    request(thing, (error, response, body) => {
      if (error) { reject(error); } else { resolve(body); };
      resolve(JSON.parse(body).name);
    })
  })
}
