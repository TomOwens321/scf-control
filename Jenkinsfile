library identifier: 'sharedlibs@master', retriever: modernSCM(
    [$class: 'GitSCMSource',
     remote: 'git@github.com:TomOwens321/sharedlibs.git']
)

node('bbone') {
    stage('Checkout') {
        checkout scm
    }

    stage('Test') {
        sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
